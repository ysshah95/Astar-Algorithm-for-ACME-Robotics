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
 * @file nodes.hpp
 * @Auther Yash Shah
 * @version 1.0
 * @brief Header file for nodes class
 * 
 * // TODO
 * 
 * @copyright MIT License (c) 2018  
 */

#ifndef INCLUDE_NODES_HPP_
#define INCLUDE_NODES_HPP_

#include <cmath>
#include <iostream>

/**
 * 
 *   // TODO
 *  
 */

class nodes{
 public:
  /**
   * @brief nodes class Constructor
   * @param none
   * @return none
   */
  nodes();

  /**
   * @brief Parameterized nodes Constructor
   * 
   * @param x coordinate of the node
   * @param y coordinate of the node
   * @param cost to come of that node
   * @param total cost of that node
   * 
   * @return none
   */
  nodes(int x, int y, int g_cost, int total_cost);

  /**
   * @brief Calculates the Euclidian Distance between the current node and goal node
   * 
   * @param x coordinate of the goal
   * @param y coordinate of the goal
   * 
   * @return the distance in double
   */
  auto compute_h(int xgoal, int ygoal) -> double;

  /**
   * @brief Calculates the path cost or cost to come of a node
   * 
   * For diagonal movement cost is 1.41
   * For straight line movement cost is 1
   * 
   * @param k is the direction of the movement
   * 
   * @retun cost to come of that node from start node
   */
  auto compute_g(int k) -> double;

  /**
   * @brief Calculates total cost of the node (f cost)
   * 
   * @param x1 is the x coordinate of the goal
   * @param y1 is the y coordinate of the goal
   * 
   * @return total cost of the node
   */
  auto compute_f(int x1, int y1) -> double;

  /**
   * @brief Destructor of the nodes object
   */
  ~nodes();

  int x_;
  int y_;
  double g_cost_;
  double f_cost_;
};
#endif  // INCLUDE_NODES_HPP_