//--------------------------------------------------------------------
//Bubble Sort Recursive
//--------------------------------------------------------------------
#include<iostream>
using namespace std;
void bubbleSortRec(int a[] , int n)
{
  if(n==1) // Base Case
  {
    return;
  }
  for(int i=0;i<n-1;i++)
  {
    if(a[i]>a[i+1])
    {
      swap(a[i],a[i+1]);
    }
  }
  bubbleSortRec(a,n-1);
}
//--------------------------------------------------------------------
//TimeComplexity
//Recurrence Relation-> T(n) = T(n-1) + (n-1)C
//                      T(n) = O(n^2)
//--------------------------------------------------------------------

//--------------------------------------------------------------------
//Space Complexity = Input + Extra
//                 =  n + Stack space
//                 =  n+n = 2n = O(n)
// NOTE:It is a tailRecursive program i.e. recursive call is the last call
//      in tail recursive program stack space is not necessary and it can be easily
//      done iteratively without using any extra stack space.
//--------------------------------------------------------------------
int main(int argc, char const *argv[]) {
  int a[]={5,4,3,2,1};
  int size=sizeof(a)/sizeof(a[0]);
  bubbleSortRec(a,size);
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
