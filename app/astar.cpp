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
}

bool operator>(const nodes& node1, const nodes& node2) {
  return true;
}