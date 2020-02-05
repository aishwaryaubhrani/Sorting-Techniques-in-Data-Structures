#include<stdio.h>


void merge(int arr[], int l, int mid, int h){
	int n1 = mid - l + 1;
	int n2 = h - mid;
	int l1[n1], r1[n2], i, j, k;
	
	for(i = 0; i<n1; i++){
		l1[i] = arr[l+i];
	}
	
	for(i = 0; i<n2; i++){
		r1[i] = arr[mid+i+1];
	}
	
	i = 0;
	j = 0;
	k = l;
	
	while(i<n1 && j<n2){
		if(l1[i]<r1[j]){
			arr[k] = l1[i];
			i++;
		}
		
		else{
			arr[k] = r1[j];
			j++;
		}
		k++;
	}
	//copying remaining elements into the array
	while(i<n1){
		arr[k] = l1[i];
		i++;
		k++;
	}
	
	while(j<n2){
		arr[k] = r1[j];
		k++;
		j++;
	}
}


void mergesort(int arr[], int l, int h){
	if(l < h){
	int mid = (l+(h-1))/2;
	mergesort(arr,l,mid);
	mergesort(arr, mid+1, h);
	
	merge(arr, l, mid, h);
}
	
}



void main(){
	int arr[] = {65, 70, 75, 80, 85, 60, 55, 50, 45};
	int len = sizeof(arr)/sizeof(arr[0]);
	mergesort(arr, 0, len-1);
	int i;
	//printing the array
	for(i = 0; i<len; i++){
		printf("%d ", arr[i]);
	}
}
