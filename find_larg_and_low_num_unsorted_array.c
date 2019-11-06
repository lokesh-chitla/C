// How do you find the largest and smallest number in an unsorted integer array? 

#include <stdio.h>

int main()
{
    int arr[10] = { 2,1,9,7,4,0,10,11,3,12};
    int i = 0;
    int j = 0;
    int low = 0;
    int big = 0;
    for(;i<10;i++) {
        for(j=0;j<10;j++) {
            if (arr[i] < arr[j])
            {
                if ( low > arr[i] ) low = arr[i];
                if ( big < arr[j] ) big = arr[j];
            }
        }
    }
    printf("Lowest : %d nd Biggest : %d \n", low, big);
    return 0;
}
