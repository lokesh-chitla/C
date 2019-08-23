#include<stdio.h>
#include<stdlib.h>
//$ gcc max_subarray.c -o max_subarray

void main(){
	int i =0, max_sum =0, j =0;
	int arr[] = {1,2,3,-1,4,-2,9,-1,10,11,9,20,-30};
	int tmp_sum =0;
	for(; i < (sizeof(arr)/sizeof(arr[0]));)
	{
		tmp_sum = tmp_sum + arr[i];
		if(tmp_sum > max_sum)
			max_sum = tmp_sum;
		if(i == ((sizeof(arr)/sizeof(arr[0])) - 1))
		{
			j += 1;
			i = j;
			tmp_sum = 0;
		}
		else
			i++;
	}	
	printf("Largest Sum Contiguous Subarray : %d \n", max_sum);
}
