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