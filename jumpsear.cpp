#include<iostream>
#include<cmath>

using namespace std;

int jumpsearch(int a[],int l,int k)
{
	int left=0;
	int jump=sqrt(l);
	int right=jump;
	while(a[right]<=k && right < l)
	{
		left=right;
		right+=jump;
		if(right > l-1)
			right=l;
	}
	for(int i=left;i < right;i++)
	{
		if(a[i]==k)
			return i;
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int key;
		cin>>key;
		int length=sizeof(a)/sizeof(a[0]);
		int x=jumpsearch(a,length,key);
		
		if(x == -1)
			cout<<"key not found"<<endl;
		else
			cout<<"key found at index "<<x<<endl;
	}
}
