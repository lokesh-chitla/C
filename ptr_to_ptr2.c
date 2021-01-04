#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    int **ptr2 = &ptr;
    printf("X : %d \n", (int) *ptr);
    printf("Ptr2 : %d \n", (int) **ptr2);
    return 0;
}
