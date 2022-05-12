#include <8051.h>

int main()
{
    while (1)
    {
        P1 = 0x55;
        P1 = 0xAA;
    }
    return 0;
}