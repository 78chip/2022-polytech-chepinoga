#include <iostream>
#include <fstream>

void show_meminfo()
{
    char parameter[20];
    int value;
    char unit[3];
    
    std::ifstream in("/proc/meminfo", std::ios_base::in);
    while(in.good())
    {
        in >> parameter >> value >> unit;
        std::cout << parameter << " " << value << unit << std::endl;
    }
}

int main()
{
  show_meminfo();
  return 0;
}
