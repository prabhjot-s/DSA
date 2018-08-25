//--------------------------------------------------------------------
//Selection Sort Recursive Algorithm
//--------------------------------------------------------------------
#include<iostream>
using namespace std;
int minIndex(int a[],int i,int j)
{
  if(i==j) //Base Condition
  {
    return i;
  }
  int k = minIndex(a,i+1,j);
  return (a[i]<a[k]) ? i:k;
}
//--------------------------------------------------------------------
//Time Complexity:
//Recurrence Relation-> T(n) = T(n-1) + C
//                      T(n) = nC = O(n)
//--------------------------------------------------------------------
void selectionSort(int a[],int n,int index)
{
  if(index==n) //Base Case
  return;

  int k=minIndex(a,index,n-1);
  if(k!=index)
  {
    swap(a[k],a[index]);
  }
  selectionSort(a, n, index+1);
}
//--------------------------------------------------------------------

//Time Complexity:
//Recurrence Relation-> T(n) = T(n-1) + nC
//                      T(n) = C( 1 + 2 + 3 +......+ (n-1) + n)
//                      T(n) = C(n(n+1)/2)
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
  selectionSort(a,size,0);
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
