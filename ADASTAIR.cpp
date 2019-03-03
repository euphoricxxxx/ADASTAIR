#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k, i, count=0;
		cin>>n>>k;
		int a[n+1];
		for(i=1;i<(n+1);i++)
			cin>>a[i];
		a[0]=0;	
		for(i=0;i<n;i++)	
		{
			count+=(a[i+1]-a[i])/k;
			if((a[i+1]-a[i])%k==0)
				count-=1;	
		}
		cout<<count;
		cout<<endl;	
	}
	return 0;
}
