#include<iostream>

using namespace std;

void ssort(int b[],int n)
{
	int i,j,pos,min;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(b[j]<b[pos])
				pos=j;
		}
		
		int tmp=b[pos];
		b[pos]=b[i];
		b[i]=tmp;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		ssort(a,n);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		
		return 0;
	}
}
