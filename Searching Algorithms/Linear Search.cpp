#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int num){
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			return i;
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
	int answer=search(arr,n,num);
	if(answer==-1) {
	    cout<<"Number is not present in the array"<<endl;
	}else{
	   cout<<"The number is at present at index "<<answer<<endl;
	}
}
