#include "bits/stdc++.h"
using namespace std;
int kadane(int *a,int n){
    int currsum=0,maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
	int n;
	cin>>n;
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
	// to check all negative number  to return -1
    int checksum=0;
    for (int i = 0; i < n; ++i)
	{
		checksum+=a[i];
	}
    if(checksum<0){
        cout<<"\n all the values are negative the not go any line ";
        return 0;
    }
    int totalsum=0;
    //multiply -1 of total array and sum of total array 
    for (int i = 0; i < n; ++i)
	{
		a[i]=-a[i];
        totalsum+=a[i];

	}
    //find kadane algorithms of -1 multiply arrray
    int k=kadane(a,n);
    int max_circular=-totalsum-(-k);

    cout<<" total sum of array is "<<totalsum<<endl;
    cout<<"  maximum circular subarray is "<<max_circular;
}
