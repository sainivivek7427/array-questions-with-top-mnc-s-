#include "bits/stdc++.h"
using namespace std;
int main(){
	int n,s;
	cin>>n>>s;
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
    int j=0,sum=0,i=0,st=0,en=0;
    while(j<n && sum+a[j]<=s){
        sum=sum+a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<j;
		return 0;
    }
	while(j<n){
		sum+=a[j];
		while(sum>s){
			sum-=a[i];
			i++;
		}
		if(sum==s){
			st=i+1;
			en=j+1;
			break;
		}
		j++;
	}
	cout<<" starting and ending index is "<<st<< "  "<<en;
    
}