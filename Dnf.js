let arr =[2,0,1,2,1,0,0,1,0,2,1,0,2,0,0,1,2]

let low = 0 ;
let mid = 0 ;
let high = arr.length -1 ; 

while(mid<=high)
{
    if(arr[high]==2)
    {
        high-- ;
        continue ;
    }
    if(arr[mid]==0)
    {
        swap(arr,mid,low)
        low++ ;
        mid++ ;
        continue ;
    }
    if(arr[mid]==1)
    {
        mid++ ;
        continue ;
    }
    if(arr[mid]==2)
    {
        swap(arr,mid,high) ;
    
       
    }
  
}
console.log(arr)
function swap(arr,i,j)
{
    let temp = arr[i];
    arr[i]=arr[j];
    arr[j]= temp ;
}
