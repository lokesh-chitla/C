// How do you find all pairs of an integer array whose sum is equal to a given number?

#include <stdio.h>

int main()
{
    int arr[10] = { 2,1,9,7,4,0,10,11,3,12};
    int i = 0;
    int j = 0;
    int sum = 7;
    for(;i<10;i++) {
        for(j=0;j<10;j++) {
            if ( sum == (arr[i] + arr[j]) ) {
                printf("Pair found at arr[%d] + arr[%d] : %d\n", i, j, sum);
            }
        }
    }
    return 0;
}
