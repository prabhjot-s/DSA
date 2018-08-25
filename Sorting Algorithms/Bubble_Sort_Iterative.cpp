//--------------------------------------------------------------------
//Bubble Sort Iterative
//--------------------------------------------------------------------
#include<iostream>
using namespace std;
bubbleSort(int a[],int n)
{
  for(int k=1;k<n;k++)  //this loop will run for n-1 times
  {
    int flag=0;
    for(int i=0;i<=n-1-k;i++) //this loop will run n-1-k times
    {
      if(a[i]>a[i+1])
      {
        swap(a[i],a[i+1]);
        flag=1;
      }
    }
    if(flag==0)
    {
      break;
    }
  }
}
//--------------------------------------------------------------------
//Time Complexity:
//The inner loop will run the following number of times
// n-1 + n-2 + n-3 +.......+ 2 + 1
//= (n-1)(n-1+1)/2 = O(n^2)
// T(n) = O(n^2)
//--------------------------------------------------------------------

int main(int argc, char const *argv[]) {
  int a[]={5,4,3,2,1};
  int size=sizeof(a)/sizeof(a[0]);
  bubbleSort(a,size);
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
