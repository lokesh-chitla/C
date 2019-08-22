#include <stdio.h>
#include <stdlib.h>
// gcc triplet_count.c -o triplet_count

void main(){
	int arr[] = {1,2,3,5,0,5,6,11,0,0,11,1,12};
	int i =0, triplet_count =0;
	for(; i < (sizeof(arr)/sizeof(arr[0])); i++)
		if((arr[i]+arr[i+1]) == arr[i+2]){
			triplet_count++;
			printf("Triplet %d: arr[%d] + arr[%d] = arr[%d] \n", i,arr[i],arr[i+1],arr[i+2]);
		}
	printf("Triplet Count : %d \n", triplet_count);	
}
