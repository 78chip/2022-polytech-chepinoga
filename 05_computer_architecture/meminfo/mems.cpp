#include <iostream>
#include <fstream>

void show_meminfo()
{
    char parameter[20];
    char unit[3];
    int memTotal, memFree, memAvalable;
    
    std::ifstream in("/proc/meminfo", std::ios_base::in);
    if(in.is_open()) {
        in >> parameter >> memTotal >> unit;
        in >> parameter >> memFree >> unit;
        in >> parameter >> memAvalable >> unit;
    } else {
        exit(1);
    }
    
    int percent = (memTotal - memAvalable) * 100 / memTotal;
    for (int i = 0; i < 100; i += 10)
        if (i < percent)
            std::cout << '|';
        else
            std::cout << '.';
    std::cout << " " << percent << "%" << std::endl;
}

int main()
{
  show_meminfo();
  return 0;
}

