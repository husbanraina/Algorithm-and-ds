// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

int main() {
    // Write C++ code here
    int n = 4 ;
    int arr[n][n]= {{1,5,9,13},
                    {2,6,10,14},
                    {3,7,11,15},
                    {4,8,12,16}};
    int target = 4 ;
    int i = 0 ;
    int j = n-1 ;
    int count = 0;
    while(i<n && j>=0)
    {
        count++ ;
        if(arr[i][j]==target)
        {
           cout<<"exists";
           cout<<count ;
           return 0 ;
        }
        else if(arr[i][j]>target)
        {
            j-- ;
            
        }
        else
        {
            i++ ;
        }
    }
    cout<<"doesnt exist" ;
    cout<<count ;
   

    return 0;
}
