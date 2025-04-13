// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
void swap(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]= temp ;
}
int main() {
    // Write C++ code here
  int arr[]= {4,3,4,9,1,7,2};
  int n = sizeof(arr)/sizeof(int);
  for(int i = 0 ; i<n-1 ; i++)
  {
      for(int j=0 ; j<n-i-1 ; j++)
      {
          if(arr[j]>arr[j+1])
          {
              swap(arr,j,j+1) ;
          }
      }
  }
   for(int i = 0 ; i<n ; i++)
   {
       cout<<arr[i]<<", " ;
   }
    return 0;
}
