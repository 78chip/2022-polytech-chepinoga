#include <cassert>

unsigned int length(const char* str)
{
    if (!str)
        return 0; 
    
    const char* end = str;
    for ( ; *end != '\0'; ++end)

        ;

    return end - str;
}

int main()
{
    assert(length("Fisics") == 6);
    assert(length("Angem") == 5);
    assert(length("Informatika") == 11);
    assert(length("Matanal") == 7);
    assert(length(nullptr) == 0);
    return 0;
}
