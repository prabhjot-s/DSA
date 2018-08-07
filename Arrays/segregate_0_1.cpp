/*
Segregate 0s and 1s in an array
You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.

Input array   =  [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
Output array =  [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
*/
#include<iostream>
using namespace std;
int main()
{
  const int n=10;
  int a[n]={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
    count++;
  }
  for(int i=0;i<count;i++)
  {
    a[i]=0;
  }
  for(int i=count;i<n;i++)
  {
    a[i]=1;
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
