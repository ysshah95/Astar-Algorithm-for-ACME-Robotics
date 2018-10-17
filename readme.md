# A* Algorithm  for ACME Robotics
*This module is for MidTerm Project of course ENPM808X: Software Development for Robotics*

[![Build Status](https://travis-ci.org/ysshah95/Astar-Algorithm-for-ACME-Robotics.svg?branch=master)](https://travis-ci.org/ysshah95/Astar-Algorithm-for-ACME-Robotics)
[![Coverage Status](https://coveralls.io/repos/github/ysshah95/Astar-Algorithm-for-ACME-Robotics/badge.svg?branch=master)](https://coveralls.io/github/ysshah95/Astar-Algorithm-for-ACME-Robotics?branch=master)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
---

## License
This project is under the [MIT License](./LICENSE)

## Overview

The current era is mainly focused on the modernization, industrialization, automation, and development. For which, the human tasks are replaced by robots to achieve good accuracy, high efficiency, speed, and multiplicity. In industries, these robots are employed to carry heavy objects in working place. A* algorithm is a heuristic function-based algorithm for proper path planning of a robot in a known environment. In this project, the same path planning algorithm is proposed which should be able to find an optimal path from a start point to end point for a point robot in a known environment with some obstacles. 

Implementation of A* path planning algorithm in C++.

The A* algorithm finds the shortest path by prioritizing the next node to expand by their total cost. Total cost of each nodes is the sum of path cost and hueristic cost to reach the goal point. Path cost is the cost or distance it moved from start node to the current node. And the hueristic cost is the eucidean distance from the current node to the goal node. This way, A* algorithm ensures that the minimum path is found and it also takes care of the  time or the total number of nodes to explore. 

This module has three classes to implement the A* algorithm. They are nodes, map and astar. The map class has a method that creates the map and the obstacle and other method that displays the path found by the astar algorithm. The node class creates nodes as objects and stires thier cost to come (path cost), hueristic cost and total cost. The class has methods to claculate each cost and store them in their respective class variables. 

The whole project was programmed using c++ programming language, and it uses c++ 11/14 features. The code was written with c++ style guide and cpp lint validations. Cppcheck was also used for static code analysis. This project followed Test_driven Development to guide implementation and uses unit tests to test the code coverage written using Google Test framework. The code follows doxygen-formatted comments to aid doxygen documentation. The code was written by following Solo Iterative Process (SIP).

### A* ALgorithm Working
![path](https://user-images.githubusercontent.com/31979840/47058074-659c3800-d191-11e8-9300-a50b43845a82.gif)


## Dependencies

To build and run this module successfully, following dependencies should be met:

- CMake version at least 3.2.1
- googletest
- SDL 2.0.8 or higher : Follow these instructions to download the SDL 2.0 dependency to run the code without error.

```
sudo apt-get install libsdl2_dev
```

## Solo Iterative Process Overview
Click this link to view the product backlog, time sheets, defect logs and release backlog - [link](https://docs.google.com/spreadsheets/d/1dE0h7dNnQtP3aUuqrfs1r5tL3C8uaOQiwODgHtyh9s4/edit?usp=sharing)

## Activity Diagram
![a_ algorithm activity diagram](https://user-images.githubusercontent.com/31979840/47058108-8fedf580-d191-11e8-8d49-08fe1f0463af.png)

## Class Diagram
![a_ algorithm uml diagram final](https://user-images.githubusercontent.com/31979840/47058096-84023380-d191-11e8-8f87-cb781bde057c.png)




## How to build: Standard install via command-line
```
git clone --recursive https://github.com/ysshah95/Astar-Algorithm-for-ACME-Robotics.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Generate Documentation using Doxygen (Instructions)

The documentation for this project is created using doxygen-gui. To generate the documentation again, please execute following the commands:

```
sudo apt-get install doxygen
sudo apt-get install doxywizard
doxywizard
```

The documentation for this project can be found at the path ```documentation/html/index.html```.

Once the gui is open, select the workspace as the repository. Fill the details as required and set the source code folder to this repository. As a destination directory, create a new folder "Documentation" in the repository and select it. Following the further steps would create the documentation. 
