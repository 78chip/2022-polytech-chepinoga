#include <iostream>
#include <fstream>
#include <cstring>

void show_meminfo()
{
    char parameter[20];
    int value;
    char unit[3];
    int memTotal=0, memAvalable=0;
    
    std::ifstream in("/proc/meminfo", std::ios_base::in);
    while(in.good())
    {
        in >> parameter >> value >> unit;
        if (std::strcmp(parameter, "MemTotal:") == 0)
            memTotal=value;
        if (std::strcmp(parameter, "MemAvailable:") == 0)
            memAvalable = value;
        // std::cout << parameter << " " << value << unit << std::endl;
    }
    
    int percent = memAvalable*100/memTotal;
    for (int i=0;i<100;i+=10)
        if (i<percent)
            std::cout << '|';
        else
            std::cout << '.';
    std::cout << " " << percent << std::endl;
}

int main()
{
  show_meminfo();
  return 0;
}
