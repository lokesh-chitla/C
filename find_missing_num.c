// How do you find the missing number in a given integer array of 1 to 100?
// In this code checked with 1 to 10 as am lazy in typing that big array :(
#include<stdio.h>
void main(){
	int arr[10]={9,2,3,4,5,6,7,8,1};
	int sum = 0;
	int i = 0;
	int sum_of_10 = 0;
	for(;i<10;i++) sum += arr[i];
	for(i=1;i<=10;i++) sum_of_10+=i;
	i = (sum_of_10 - sum); 
	if ( i > 0 )
		printf("Missing Num : %d \n", i);
	else
		printf("No Missing Num!\n");
}
