// Majority Element : Repeated more than half of array size

#include<stdio.h>
#include<stdlib.h>

void main(){
        int i = 0, j =0, arr_size = 0;
        printf("Enter Array Size : ");
        scanf("%d", &arr_size);
        int arr[arr_size];
        //printf("Array Size : %d \n", sizeof(arr));
        printf("Enter Array Elements...\n");
        int tmp[arr_size];
        int maj_ele =0, count =0, k=0;
        for(i =0; i < arr_size; i++)
        {
                scanf("%d", &arr[i]);
                for ( j =0; j < i; j++)
                        if(arr[j] == arr[i])
                                maj_ele = arr[i];
        }

        for(i =0; i < arr_size; i++)
                if(arr[i] == maj_ele)
                        count++;

        if(count > (arr_size/2))
                printf("Majority Element : %d with Count : %d\n", maj_ele, count);
        else
                printf("Max repeated element : %d with Count : %d\n", maj_ele, count);
}
