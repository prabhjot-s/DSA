//Maximum Subarrays sum
//BRUTE FORCE O(n^3) time complexity
#include<iostream>
using namespace std;
/*
int main()
{
  const int n=9;
  int maximumSum=0;
  int currentSum=0;
  int left=-1,right=-1;
  int a[n]={-4,1,3,-2,6,2,-8,-9,4};
  //Generating Subarrays
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      currentSum=0;
      for(int k=i;k<=j;k++)
      {
        currentSum+=a[k];
      }
      if(currentSum>=maximumSum)
      {
        right=i;
        left=j;
        maximumSum=currentSum;
      }
    }
  }
  cout<<"The maximum sum is: "<<maximumSum<<endl;
  cout<<"The Subarray is: "<<endl;
  for(int k=right;k<=left;k++)
  {
    cout<<a[k]<<",";
  }
}
*/

//Improving a little on time complexity from O(n^3) to O(n^2)
//Using the cumulative sum approach

int main()
{
  const int n=9;
  int maximumSum=0;
  int currentSum=0;
  int cumSum[n]={0}; //initiliazing cumulative sum array with 0
  int left=-1,right=-1;
  int a[n]={-4,1,3,-2,6,2,-8,-9,4};
  cumSum[0]=a[0];
  for(int i=1;i<n;i++)
  {
    cumSum[i]=cumSum[i-1]+a[i];
  }
  //Generating Subarrays
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      currentSum=cumSum[j]-cumSum[i-1];
      if(currentSum>=maximumSum)
      {
        right=i;
        left=j;
        maximumSum=currentSum;
      }
    }
  }
  cout<<"The maximum sum is: "<<maximumSum<<endl;
  cout<<"The Subarray is: "<<endl;
  for(int k=right;k<=left;k++)
  {
    cout<<a[k]<<",";
  }
}
