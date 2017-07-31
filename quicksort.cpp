/*
Name - Prithvi Raj Singh Bisht
Roll_no - 55
Section - B
Univer_roll -2010434
*/
#include<iostream>

using namespace std;

void swap(int* x, int* y)
{
  int tmp=*x;
  *x=*y;
  *y=tmp;
}


int part(int a[],int l,int h)
{
  int piv=a[h];
  int i=l-1;
  for (int j=l;j<=h-1;j++)
  {
    if (a[j]<=piv)
    {
      i++;
      swap(&a[i],&a[j]);
    }
  }
  swap(&a[i+1],&a[h]);
  return(i+1);
}

void quickSort(int a[],int l,int h)
{
  if (l<h)
  {
    int p=part(a,l,h);
    quickSort(a,l,p-1);
    quickSort(a,p+1,h);
  }
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
      int n;
      cin>>n;
      int a[n];
      int i,j;
      for(i=0;i<n;i++)
      {
        cin>>a[i];
      }
      quickSort(a,0,n-1);
      cout<<"Sorted array"<<endl;
      for(i=0;i<n;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<'\n';
    }
    return 0;
}
