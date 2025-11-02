#include <iostream>

#include "process.h"

void process::planProcess()
{
    std::cout << "this is planProcess"<<std::endl;
    my_map.mapInfo();
    std::cout << "plan success"<<std::endl;
}

process::process(/* args */)
{
}

process::~process()
{
}