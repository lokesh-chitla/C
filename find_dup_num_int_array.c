//How do you find the duplicate number on a given integer array?
//Note, Assuming Integer values are in ascending order including Duplicate integer.
#include <stdio.h>
#include <stdlib.h>

void find_dup(int start_range, int *arr)
{
	int i = 0;
	int j = 0;
	for(; i <= 10; i++){
		for(;j < 10; j++){
			if ( i+start_range != j+start_range){
				if (arr[i+start_range] == arr[j+start_range]){
					printf("Duplicate number : %d\n", arr[i+start_range]);
					exit(0);
				}
			}
		}
		j = 0;
	}
	
}
void main(){
	int i = 0;
	int j = 10;
	int k = 0;
	int x = 0;
	long int cur_sum = 0;
	long int exp_sum = 55;
	int arr[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,19,20,21,22,23,24,25,26,27,28,29,30};
	for (; i < 30;)	{
		for(x = i;k < 10; k++)
		{
		 	cur_sum += arr[x];
			x++;
		}
		//for(exp_sum = i;x <= 10; x++)   exp_sum += x;
		//x = 0;
		if ( exp_sum != cur_sum ) find_dup(i,arr);
		i = j;
		j += 10;
		exp_sum += 100;
		cur_sum = 0; k = 0;
	}
	printf("No duplicte number in given integer array!\n"); 
}
