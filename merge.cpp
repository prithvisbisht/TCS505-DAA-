/*
Name - Prithvi Raj Singh Bisht
Roll_no - 55
Section - B
Univer_roll -2010434
*/
#include <iostream>

using namespace std;

void Merge(int a[],int l,int h,int mid)
{
	int i,j,k,temp[h-l+1];
	i=l;
	k=0;
	j=mid + 1;

	while (i<=mid && j<=h)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j<=h)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for (i =l;i<=h;i++)
	{
		a[i] = temp[i-l];
	}
}

void MergeSort(int a[], int l, int h)
{
	int mid;
	if (l<h)
	{
		mid=(l+h)/2;
		MergeSort(a,l,mid);
		MergeSort(a,mid+1,h);
		Merge(a,l,h,mid);
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
    int i,j;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    MergeSort(a,0,n-1);
    cout<<"sorted Data"<<endl;
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
}
