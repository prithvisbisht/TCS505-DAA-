#include<iostream>

using namespace std;
 
void Sort(int arr[], int n)
{
   int i, key, j;
   for (i=0; i<n; i++)
   {
       key = arr[i];
       j=i-1;
       while(j>=0 && arr[j]>key)
       {
       		arr[j+1]=arr[j];
       		j=j-1;
       }
       arr[j+1] = key;
   }
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
   		Sort(a,n);
 		for (i=0; i<n; i++)
    	   	cout<<a[i]<<"\t";
   	}
   	
    return 0;
}

