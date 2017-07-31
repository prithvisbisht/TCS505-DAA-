/*
Name-Prithvi Raj Singh Bisht
Roll_no- 55
Section-B
Jump Search
*/
#include<iostream>
#include<cmath>

using namespace std;

int jsearch(int a[],int l,int k)
{
	int left=0;
	int jump=sqrt(l);//this is th jump that is to be made during searching this can differ from user to user;
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
			{
				//cout<<" Hello";
				return i;
			}
	}
	return -1;
}
int main()
{
	int t,x;
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
		x=jsearch(a,n,key);
		if(x == -1)
			cout<<"key not found"<<endl;
		else
			cout<<"key found at index "<<x<<endl;
	}
}
