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
 * @file main.cpp
 * @Auther Yash Shah
 * @version 1.0
 * @brief main cpp file for Project implementation
 * 
 * This is the program to implement the A* algorithm. 
 * 
 * @copyright MIT License (c) 2018  
 */

#include <iostream>
#include <vector>
#include "astar.hpp"
#include "map.hpp"
#include "nodes.hpp"


int main() {
    // Create the map object
    map blank_map;
    // Store the map with obstacles in a variable.
    std::vector<std::vector<int>> map = blank_map.create_map();
    // Create the astar object with initialization.
    astar path_finder(0, 0, 5, 5);
    // Store the path found in a variable
    std::vector<std::pair<int, int>> path = path_finder.astar_path(map);
    // Show the path on map.
    blank_map.print_path(map, path);
    return 0;
}
