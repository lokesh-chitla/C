/* Reading on bits from int value, logic meant for 64bit */
#include <stdio.h>

void main()
{
    int x = 98;
    int i =0;
    int count =0;
    for(i=0; i<8; i++) {
        if ((x & 1) == 1) count++;
        x = (x >> 1);
    }
    printf("Num of ON/1 bits in %d : %d \n", x,count);
}
