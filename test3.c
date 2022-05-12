#include <8051.h>

#define XNULL 0x7F
#define X0 0xC0
#define X1 0xF9
#define X2 0xA4
#define X3 0xB0
#define X4 0x99
#define X5 0x92
#define X6 0x82
#define X7 0xF8
#define X8 0x80
#define X9 0x90

int main()
{
    while (1)
    {
        if (P2_0 == 0)
        {
            P1 = X0;
        }
        if (P2_1 == 0)
        {
            P1 = X1;
        }
        if (P2_2 == 0)
        {
            P1 = X2;
        }
        if (P2_3 == 0)
        {
            P1 = X3;
        }
        if (P2_4 == 0)
        {
            P1 = X4;
        }
        if (P2_5 == 0)
        {
            P1 = X5;
        }
        if (P2_6 == 0)
        {
            P1 = X6;
        }
        if (P2_7 == 0)
        {
            P1 = X7;
        }
    }
}