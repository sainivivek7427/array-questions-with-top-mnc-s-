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
	const int N=1e5+2;
	int idx[N];
	int minidx=INT_MAX;
	for (int i = 0; i < N; i++)
	{
		idx[i]=-1;
	}
	for(int i=0;i<n;i++){
		if(idx[a[i]]!=-1){
			minidx=min(minidx,idx[a[i]]);
		}
		else{
			idx[a[i]]=i;
		}
	}
	if(minidx==INT_MAX){
		cout<<" -1 is found";
	}
	else{
		cout<<"minimum index accuring is "<<minidx+1;
	}

}