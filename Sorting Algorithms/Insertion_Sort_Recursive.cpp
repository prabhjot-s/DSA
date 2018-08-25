//--------------------------------------------------------------------
//Insertion Sort Recursive
//--------------------------------------------------------------------
#include<iostream>
using namespace std;
void insertionSortRec(int a[],int n)
{
  if(n<=1)
  return;
  insertionSortRec(a,n-1);
  int value=a[n-1];
  int hole=n-1;
  while(hole>0 || a[hole-1]>value)
  {
    a[hole]=a[hole-1];
    hole--;
  }
  a[hole]=value;
}
//NOTE: this is not a tail Recursion we are doing some work after recursive call
//--------------------------------------------------------------------
//Time Complexity:Best Case
//Recurrence Relation-> T(n) = T(n-1) + nC
//                      T(n) = O(n^2)
//--------------------------------------------------------------------

int main(int argc, char const *argv[]) {
  int a[]={5,4,3,2,1};
  int size=sizeof(a)/sizeof(a[0]);
  insertionSortRec(a,size);
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
