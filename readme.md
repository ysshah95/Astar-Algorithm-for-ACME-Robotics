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

Simple starter C++ project with:

- cmake
- googletest

## Solo Iterative Process Overview
Click this link to view the product backlog, time sheets, defect logs and release backlog - [link](https://docs.google.com/spreadsheets/d/1dE0h7dNnQtP3aUuqrfs1r5tL3C8uaOQiwODgHtyh9s4/edit?usp=sharing)

## Activity Diagram
<p align="center">
<a target="_blank"><img src="UML/initial/A_ Algorithm Activity Diagram.png"
alt="NMPC" width="480" height="480" border="10" />
</a>
</p>


## Standard install via command-line
```
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.