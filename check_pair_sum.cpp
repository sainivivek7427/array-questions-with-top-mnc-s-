#include "bits/stdc++.h"
using namespace std;
bool checkpair_sum(int *a,int n,int k){
    int start=0;
    int end=n-1;
    while(start<end){
        if(a[start]+a[end]<k){
            start++;
        }
        else if(a[start]+a[end]>k){
            end--;
        }
        else if(a[start]+a[end]==k){
            return true;
        }
    }
    return false;
}
int main(){
	int n,sum;
	cin>>n>>sum;
	int *a=new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
    bool k=checkpair_sum(a,n,sum);
    if(k==1){
        cout<<"exist pair in the array list"<<endl;
    }
    else{
        cout<<"not exist in the array list";
    }
}