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
  int arr[]= {10,4,3,4,9,1,7,-10,2};
  int n = sizeof(arr)/sizeof(int);
  for(int i=0; i<n-1 ; i++)
  {
       int min = arr[i];
       int minIndex = i ;
      for(int j=i+1 ; j<n ; j++)
      {
         
          if(min>arr[j])
          {
              min =arr[j];
              minIndex = j ;
          }
      }
      swap(arr,i,minIndex);
  }
   for(int i = 0 ; i<n ; i++)
   {
       cout<<arr[i]<<", " ;
   }
    return 0;
}
