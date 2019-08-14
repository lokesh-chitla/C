#include <stdio.h>
#include <stdlib.h>

// Write a program to print all the LEADERS in the array,
// an element is leader if it is greater than all the elements to its right side
// Compile gcc arr_leaders.c -o arr_leaders

void main(){
	int i =0, j =0, arr_size =0;
	printf("Enter Array Size:");
	scanf("%d", &arr_size);
  
	if (arr_size < 0)
		exit(1);
	int arr[arr_size];
	int leaders[arr_size];

	for(; i < arr_size; i++)
		scanf("%d", &arr[i]);
	
	for(i=0; i < arr_size; i++)
		printf("ARR Element %d : %d\n",i,arr[i]);
	
	for(i=0; i < arr_size; i++)
		if(arr[i] > arr[i+1])
		{
			leaders[j] = arr[i];
			j++;
		}
	
	for(i=0; i < j; i++)
		printf("Leaders elements %d : %d\n",i,leaders[i]);
}
