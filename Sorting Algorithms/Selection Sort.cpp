#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    int min=0;
	for(int i=0;i<n-1;i++){
	    min=i;
	    for(int j=i+1;j<n;j++){
	        if(arr[min]>arr[j]){
	            min=j;
	        }
	    }
	    swap(arr[min],arr[i]);
	}
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(arr,n);
	print(arr,n);
}
