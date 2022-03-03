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