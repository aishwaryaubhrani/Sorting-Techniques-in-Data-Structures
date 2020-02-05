#include<stdio.h>


void quicksort(int arr[], int low, int high){
	int x;
	if(low<high){
		x = partition(arr, low, high+1);
		quicksort(arr, low, x-1);
		quicksort(arr, x+1, high);		
	}
}

int partition(int arr[], int k, int l){
	int u, i, j, temp;
	u = arr[k];
	i = k;
	j = l;
	while(i < j){
	do{
		i++;
	}while(u>arr[i]);
	
	do{
		j--;
	}while(u<arr[j]);
	
	if(i<j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
	//when j>i we will swap first element with j
		temp = arr[j];
		arr[j] = u;
		arr[k] = temp;
	return j;
}



void main(){
	int arr[] = {65, 70, 75, 80, 85, 60, 55, 50, 45};
	int len = sizeof(arr)/sizeof(arr[0]);
	quicksort(arr, 0, len-1);
	int i;
	//printing the array
	for(i = 0; i<len; i++){
		printf("%d ", arr[i]);
	}
}
