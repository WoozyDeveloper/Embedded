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

int og(int nr)
{
    int newNum = 0;
    while (nr)
    {
        newNum = newNum * 10 + nr % 10;
        nr /= 10;
    }
    return newNum;
}

void setPosition(int pos)
{
    switch (pos)
    {
    case 1:
        P3_3 = 0;
        P3_4 = 0;
        break;
    case 2:
        P3_3 = 1;
        if (P3_4 == 1)
            P3_4 = 0;
        break;
    case 3:
        if (P3_3 == 1)
            P3_3 = 0;
        P3_4 = 1;
        break;
    case 4:
        P3_3 = 1;
        P3_4 = 1;
        break;
    default:
        break;
    }
}

int main()
{
    while (1)
    {
        setPosition(1);
        P1 = X0;

        setPosition(2);
        P1 = X1;

        setPosition(3);
        P1 = X2;

        setPosition(4);
        P1 = X3;
    }
}