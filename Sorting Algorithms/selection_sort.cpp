//Selection Sort Iterative
#include<iostream>
using namespace std;
void selectionSort(int a[],int size)
{
  int iMin=-1,temp=0;
  for(int i=0;i<size-1;i++)
  {
    iMin=i;
    for(int j=i+1;j<size;j++)
    {
      if(a[j]<a[iMin])
      {
        iMin=j;
      }
    }
    temp=a[i];
    a[i]=a[iMin];
    a[iMin]=temp;
  }
}
int main(int argc, char const *argv[]) {
  int a[]={5,4,3,2,1};
  int size=sizeof(a)/sizeof(int);
  selectionSort(a,size);
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
