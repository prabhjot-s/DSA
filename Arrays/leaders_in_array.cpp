/*
Leaders in an array
Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.

Let the input array be arr[] and size of the array be size.
*/
#include<iostream>
#include<limits.h>
using namespace std;

//METHOD 1: BRUTE FORCE
//Time Complexity=O(n^2)
/*
int main()
{
  const int n=7;
  int j;
  int a[n]={15,16,3,2,6,1,4};
  for(int i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[j]>=a[i])
      break;
    }
    if(j==n)
    cout<<a[i]<<" ";
  }
}
*/
//METHOD 2:MAX FROM RIGHT
//Time Complexity:O(n)

int main()
{
  const int n=7;
  int a[n]={15,16,3,2,6,1,4};
  int mfr=a[n-1];
  cout<<a[n-1]<<" "; //last element of the array is always a leader
  for(int i=n-2;i>=0;i--)
  {
    if(a[i]>mfr)
    {
      mfr=a[i];
    cout<<a[i]<<" ";
  }
  }
}
