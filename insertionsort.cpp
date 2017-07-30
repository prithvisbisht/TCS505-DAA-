/*
Name-Prithvi Raj Singh Bisht
Roll_no- 55
Section-B
*/
#include<iostream>

using namespace std;
 
void insert(int arr[], int n)
{
   int i, key, j;
   int shift=0;
   int comparison=0;
   for (i=0; i<n; i++)
   {
       key = arr[i];
       j=i-1;
       while(j>=0 && arr[j]>key)
       {
       		arr[j+1]=arr[j];
       		shift++;
       		comparison++;
       		j=j-1;
       }
       arr[j+1] = key;
       shift++;
   }
   cout<<"shifts --> "<<shift-1<<endl;
   cout<<"comparisons --> "<<comparison<<endl;
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
   		insert(a,n);
 		for (i=0; i<n; i++)
    	   	cout<<a[i]<<"\t";
   	}
   	
    return 0;
}

