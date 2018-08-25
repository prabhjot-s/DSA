//--------------------------------------------------------------------
//Insertion Sort Iterative
//--------------------------------------------------------------------
#include<iostream>
using namespace std;
insertionSort(int a[],int n)
{
  int value=0,hole=-1;
  for(int i=1;i<n;i++) //this loop will run n-1 times in both best and worst case
  {
    value=a[i];
    hole=i;
    while(hole>0 || a[hole-1]>value) //this loop will not be executed in the best case when the given array is sorted
    {
      a[hole]=a[hole-1];
      hole--;
    }
    a[hole]=value;
  }
}
//--------------------------------------------------------------------
//Time Complexity:Best Case
//if the given array is already sorted then the while loop will never be executed
//T(n) = O(n)
//Time Complexity:Worst Case
//The inner loop will run the following number of times in worst case i.e. desceding order array provided for ascending order sorting
// n-1 + n-2 + n-3 +.......+ 2 + 1
//= (n-1)(n-1+1)/2 = O(n^2)
// T(n) = O(n^2)
//--------------------------------------------------------------------
int main(int argc, char const *argv[]) {
  int a[]={5,4,3,2,1};
  int size=sizeof(a)/sizeof(a[0]);
  insertionSort(a,size);
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
