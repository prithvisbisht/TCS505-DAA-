#include<iostream>

using namespace std;

int binary(int *a,int l,int u,int k)
{
	while(l<=u)
	{
		int mid=(l+u)/2;
		if(a[mid]==k)
		{
			return 1;
		}
		else if(k >a[mid])
		{
			l=mid+1;
		}
		else if(k < a[mid])
		{
			u=mid-1;
		}
	}
	return 0;
}
int main()
{
	int t;
	cout<<"enter no. of test cases"<<endl;
	cin>>t;
	while(t--)
	{
		int n;
		cout<<"enter the limit"<<endl;
		cin >> n;
		int a[n];
		cout<<"enter numbers"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int key;
		cout<<"enter key or number to be searched"<<endl;
		cin>>key;
		int res=binary(a,0,n-1,key);
		if(res==1)
		{
			cout<<"number found"<<endl;
		}	
		else
		{
			cout<<"number not found"<<endl;
		}
	}
}
