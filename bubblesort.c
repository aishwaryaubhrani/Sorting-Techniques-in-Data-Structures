#include<stdio.h>

void bubblesort(int arr[], int len){
	int i, j, temp;
	for(i = 0; i < len - 1; i++){
		for(j = 0; j < len-1; j++){
			
			//swapping the numbers
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	//printing the sorted array
	for(i = 0; i<len; i++){
		printf("%d ", arr[i]);
	}
	
}



void main(){
	int arr[] = {10,30, 5, 20, 35, 55};
	int len = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr, len);
}
