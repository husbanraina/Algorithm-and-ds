// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

int main() {
    // Write C++ code here
  int arr[]= {10,4,3,4,9,1,7,-10,2};
  int n = sizeof(arr)/sizeof(int);
 for(int i= 1; i<n ; i++)
 {
    int current = arr[i];
    int prev = i-1 ;
    while(prev>=0 &&arr[prev]>current)
    {
        arr[prev+1]=arr[prev];
        prev = prev-1 ;
    }
    arr[prev+1]=current ;
 }
   for(int i = 0 ; i<n ; i++)
   {
       cout<<arr[i]<<", " ;
   }
    return 0;
}
