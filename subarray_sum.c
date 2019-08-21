#include<stdio.h>
#include<stdlib.h>
// Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.
// gcc subarray_sum.c -o subarray_sum

void main()
{
        int arr[] = {21,3,4,5,3,4,1,20,0};
        int Sum =20, i =0, start =0, end =0, len =(sizeof(arr)/4), tmp_Sum =arr[0];
        for(;i < len;)
        {
                if(tmp_Sum == Sum){
                        end =i;
                        break;
                }
                else if(tmp_Sum < Sum){
                        //printf("1.tmp_Sum and Sum : %d and %d \n", tmp_Sum, Sum);
                        tmp_Sum = tmp_Sum + arr[i+1];
                        i++;
                }
                else if(tmp_Sum > Sum){
                        //printf("2..tmp_Sum and Sum : %d and %d \n", tmp_Sum, Sum);
                        tmp_Sum = arr[i+1];
                        start++;
                        i = start;
                }
        }

        if (start != 0)
                printf("Subarray with given sum indexs : arr[%d] and arr[%d] \n ", start, end);
        else
                printf("Subarray with given sum NOT FOUND!\n");
}
