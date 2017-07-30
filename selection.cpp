#include<iostream>

using namespace std;

void ssort(int b[],int n)
{
	int i,j,pos,min;
	int swaps=0;
	int comparison=0;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			comparison++;
			if(b[j]<b[pos])
				{	
					pos=j;
				}
		}
		
		int tmp=b[pos];
		b[pos]=b[i];
		b[i]=tmp;
		swaps++;
	}
	cout<<"comparision are --> "<<comparison<<"\t swaps are --> "<<swaps<<endl;
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
