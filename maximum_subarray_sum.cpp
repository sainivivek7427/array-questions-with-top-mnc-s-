#include "bits/stdc++.h"
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
    //start kadane algotithm
    //using time complexxity =O(n)
    int currsum=0,maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    //print answer
    cout<<"\nmaximum subrray sum is "<<maxsum;
}