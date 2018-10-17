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
 * @file map.hpp
 * @Auther Yash Shah
 * @version 1.0
 * @brief Header file for map class
 * 
 * This class implements the mapping of the algorithm. One method creates 
 * the map and other draws the path on the map. 
 * 
 * @copyright MIT License (c) 2018  
 */

#ifndef INCLUDE_MAP_HPP_
#define INCLUDE_MAP_HPP_

#include <vector>
#include <SDL.h>
#include <iostream>
#include <utility>

class map{
 public:
  /**
   * @brief creates a map woth obtacles and free space as a known 
   * environment for path finding
   * 
   * Points that can be traversed are 1 and which cannot be traversed
   * or that are obstacles are 0
   * 
   * @param none
   * 
   * @return 2D vector with map points
   */
  std::vector<std::vector<int>> create_map();

  auto print_path(std::vector<std::vector<int>> map,
                    std::vector<std::pair<int, int>> path) -> bool;
};

#endif  // INCLUDE_MAP_HPP_
