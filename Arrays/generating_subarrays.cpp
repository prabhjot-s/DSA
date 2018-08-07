#include<iostream>
using namespace std;
int main()
{
  const int n=10;
  int a[n]={0,1,2,3,4,5,6,7,8,9};
  //Generating Subarrays
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      //Printing Subarrays
      for(int k=i;k<=j;k++)
      {
        cout<<a[k]<<" ";
      }
      cout<<endl;
    }
  }
}
