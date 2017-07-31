/*
Name-Prithvi Raj Singh Bisht
Roll_no- 55
Section-B
Linear search
*/
#include<iostream>

using namespace std;

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n;
		int compare=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int key;
        cin >> key;
        for(i=0;i<n;i++)
        {
            compare++;
            if(a[i]==key)
            {
                cout<<"Present "<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<" Not Present "<<endl;
        }
        cout<<"total comparisons-->"<<compare<<endl;
	}
}
