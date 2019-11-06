//How do you find the duplicate number on a given integer array?
//Note, Assuming Integer values are in ascending order including Duplicate integer.
#include <stdio.h>
#include <stdlib.h>

int find_dup(int start_range, int *arr)
{
  static cnt = 1;
	int i = 0;
	int j = 0;
	for(; i <= 10; i++){
		for(;j < 10; j++){
			if ( i+start_range != j+start_range){
				if (arr[i+start_range] == arr[j+start_range]){
					printf("%d.Duplicate number : %d\n", cnt, arr[i+start_range]);
           cnt++;
					return 0;
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
	int FOUND_DUP = 0;
	long int cur_sum = 0;
	long int exp_sum = 55;
	int arr[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,17,19,20,21,22,23,23,25,26,27,28,29,30};
	for (; i < 30;)	{
		for(x = i;k < 10; k++)
		{
		 	cur_sum += arr[x];
			x++;
		}
		if ( exp_sum != cur_sum ) {
			FOUND_DUP=1;
			find_dup(i,arr);
		}
		i = j;
		j += 10;
		exp_sum += 100;
		cur_sum = 0; k = 0;
	}
	if (FOUND_DUP == 0)
	    printf("No duplicte found number(s) in given integer array!\n"); 
}
