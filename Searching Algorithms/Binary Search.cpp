#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int num){
	int i=0, j=n-1,mid=0;
	while(i<=j){
	    mid=i+(j-i)/2;
	    if(arr[mid]==num){
	        return mid;
	    }else if(arr[mid]>num){
	        j=mid-1;
	    }else{
	        i=mid+1;
	    }
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int num;
	cout<<"Enter the number you want to search"<<endl;
	cin>>num;
	int answer=binarySearch(arr,n,num);
	if(answer==-1) {
	    cout<<"Number is not present in the array"<<endl;
	}else{
	   cout<<"The number is at present at index "<<answer<<endl;
	}
}
