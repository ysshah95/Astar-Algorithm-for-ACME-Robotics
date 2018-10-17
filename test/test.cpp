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
 * @file test.cpp
 * @Auther Yash Shah
 * @version 1.0
 * @brief test file for gtest
 * 
 * This file tests all the methods written in classes.
 * This testing follows Google Testing Style.
 * 
 * @copyright MIT License (c) 2018  
 */

#include <gtest/gtest.h>
#include <vector>
#include "nodes.hpp"
#include "map.hpp"
#include "astar.hpp"

/**
 * @brief Test for checking nodes class implementation
 * @section DESCRIPTION Used ASSERT macro instead of EXPECT because 
 *          if there is a failure in initialization tests the test
 *          execution should abort
 */
TEST(nodesTest, methodTesting) {
  nodes node1;

  ASSERT_EQ(node1.x_, 0);

  nodes node2(1, 1, 0, 0);
  ASSERT_EQ(node2.f_cost_, 0);

  int i = 0;
  ASSERT_EQ(node2.compute_g(i), 1);

  ASSERT_DOUBLE_EQ(node2.compute_h(1, 1), 0.0);

  ASSERT_DOUBLE_EQ(node2.compute_f(1, 1), 1.0);
}

/**
 * @brief Test for checking astar and map class methods
 * @section DESCRIPTION Used ASSERT macro instead of EXPECT because 
 *          if there is a failure in initialization tests the test
 *          execution should abort
 */
TEST(astarTest, methodTesting) {
  astar a;

  ASSERT_EQ(a.x_start_, 0);

  astar a1(0, 0, 5, 5);
  ASSERT_EQ(a1.x_goal_, 5);

  astar astar2(0, 0, 2, 2);
  map map2;
  std::vector<std::vector<int>> m1 = map2.create_map();
  std::vector<std::pair<int, int>> path2;
  path2 = astar2.astar_path(m1);
  bool status1 = map2.print_path(m1, path2);
  ASSERT_EQ(status1, 1);

  astar astar1(0, 0, 5, 5);
  map map1;
  std::vector<std::vector<int>> m = map1.create_map();
  m[5][5] = 0;
  std::vector<std::pair<int, int>> path1;
  path1 = astar1.astar_path(m);
  ASSERT_EQ(path1[0].first, -1);

  bool status = map1.print_path(m, path1);
  ASSERT_EQ(status, false);
}
