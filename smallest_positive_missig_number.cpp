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
	const int N=1e5 + 2;
	bool check[N];
	
	for (int i = 0; i < N; i++)
	{
		check[i]=false;
	}
    for (int i = 0; i <n; i++)
	{
		if(a[i]>=0){
            check[a[i]]=true;
        }

	}
    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    
    cout<<"\n missing positive number index is "<<ans;
}