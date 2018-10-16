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
 * // TODO
 * 
 * @copyright MIT License (c) 2018  
 */

#include <iostream>
#include <vector>
#include "astar.hpp"
#include "map.hpp"
#include "nodes.hpp"


int main()
{
    map blank_map;
    std::vector<std::vector<int>> map = blank_map.create_map();
    astar path_finder(0,0,5,5);
    std::vector<std::pair<int,int>> path = path_finder.astar_path(map);
    //std::cout << path[0].first << std::endl;
    
    bool status = blank_map.print_path(map, path);
    if (!status){
        std::cout << "Path Found" << std::endl;
    }
    return 0;
}