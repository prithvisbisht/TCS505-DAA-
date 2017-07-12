#include<iostream>

using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int n;
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
            if(a[i]==key)
            {
                cout<<"Present "<<i+1<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<" Not Present "<<endl;
        }
	}
}
