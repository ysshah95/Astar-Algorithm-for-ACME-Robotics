/**
 * MIT License
 * 
 * Copyright (c) 2018 Yash Shah
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * @file astar.cpp
 * @Auther Yash Shah
 * @version 1.0
 * @brief Definition of astar class methods
 * 
 * // TODO
 * 
 * @copyright MIT License (c) 2018  
 */

// include c+ header file for this class
#include "astar.hpp"

astar::astar(void) : x_start_(0), y_start_(0), x_goal_(1), y_goal_(1){
    std::cout << "Default Constructor Called" << std::endl;
}

astar::astar(int xStart, int yStart, int xGoal, int yGoal) :  x_start_(xStart),
                            y_start_(yStart), x_goal_(xGoal), y_goal_(yGoal) {
}

std::vector<std::pair<int, int>> astar::astar_path(std::vector<std::vector<int>> map){
    int neighbours = 8; /* max no of possible neighbors for any node*/
    /* possible moves in x direction and
    * possible moves in y directions */
    std::vector<int> moveX { 1, 1, 0, -1, -1, -1, 0, 1 };
    std::vector<int> moveY { 0, 1, 1, 1, 0, -1, -1, -1 };
    std::vector<std::pair<int, int>> path;
    std::priority_queue<nodes,std::vector<nodes>, std::greater<nodes> > open_list;
    std::priority_queue<nodes,std::vector<nodes>, std::greater<nodes> > temp_list;
    std::vector<std::vector<int> > open(10, std::vector<int>(10, 0));
    std::vector<std::vector<int> > visited(10, std::vector<int>(10, 0));
    std::vector<std::vector<int> > parentDir(10, std::vector<int>(10, 0));
    nodes start(x_start_, y_start_, 0, 0);
    start.f_cost_ = start.compute_f(x_goal_, y_goal_);
    open_list.push(start);
    open[start.x_][start.y_] = start.f_cost_;
    /* while open list is not empty this loop
    * chooses the node with least total cost
    * and expands it*/
    //std::cout << x_start_ << std::endl;
    //std::cout << y_start_ << std::endl;
    //std::cout << x_goal_ << std::endl;
    //std::cout << y_goal_ << std::endl;
    while (!open_list.empty()) {
      nodes current = open_list.top();
      open_list.pop();
      open[current.x_][current.y_] = 0;
      visited[current.x_][current.y_] = 1;
      /* If goal is found this loop uses parentDir
      * map to trace the path from start node to
      * end node*/
      
      if (current.x_ == x_goal_ && current.y_ == y_goal_) {
        //std::cout << "I am Here" << std::endl;
        int p = current.x_, q = current.y_;
        while (!(p == x_start_ && q == y_start_)) {
          int j = parentDir[p][q];
          path.push_back(std::make_pair(p,q));
          std::cout << p << std::endl;
          std::cout << q << std::endl;
          p += moveX[j];
          q += moveY[j];
        }
        return path;
      }
      /* This loop expands the current node and
      * calculates the costs for all the neighbours. */
      int dir = 0;
      while (dir < 8) {
          int dx = current.x_ + moveX[dir], dy = current.y_ + moveY[dir];
          /* If the node lies outside the map, is blocked
          * or is in the visisted list then it is ignored.*/
        if (!(dx < 0 || dx > 9 || dy < 0 || dy > 9 || map[dx][dy] == 0
                || visited[dx][dy] == 1)) {
            nodes child(dx, dy, current.g_cost_, current.f_cost_);
            child.g_cost_ = child.compute_g(dir);
            child.f_cost_ = child.compute_f(x_goal_, y_goal_);
            /* If the node is not in the open list
            * it's total cost and parent node are updated.*/
          if (open[dx][dy] == 0) {
              open[dx][dy] = child.f_cost_;
              open_list.push(child);
              parentDir[dx][dy] = (dir + neighbours / 2) % neighbours;
            /* If the node exists in open list but has more
            * promising total cost then it is replaced by
            * the previous node and it's parent direction is updated.*/
            } else if (open[dx][dy] > child.f_cost_) {
              open[dx][dy] = child.f_cost_;
              parentDir[dx][dy] = (dir + 8 / 2) % 8;
            while (!(open_list.top().x_ == dx && open_list.top().y_ == dy)) {
              temp_list.push(open_list.top());
              open_list.pop();
            }
            open_list.pop();
            while (!temp_list.empty()) {
              open_list.push(temp_list.top());
              temp_list.pop();
            }
            open_list.push(child);
          }
        }
        ++dir;
      }
      //std::cout << open_list.size() << std::endl;
    }
    std::cout << "Path not found."
              << std::endl;
    std::cout << "Please run again." << std::endl;
    path.push_back(std::make_pair(-1,-1));
    return path;
}

bool operator>(const nodes& node1, const nodes& node2) {
  return node1.f_cost_ > node2.f_cost_;
}