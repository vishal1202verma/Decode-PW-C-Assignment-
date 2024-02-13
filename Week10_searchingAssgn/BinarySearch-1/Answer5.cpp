// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] 
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2
#include<iostream>
#include<vector>
using namespace std;
int main (){
int arr[] = {1,2,3,4,5,5,6,7,8};
int n = sizeof(arr)/sizeof(arr[0]);
int lo =0;
int hi = n-1;
cout<<"The Duplicate element of the array is : ";
while(lo<=hi){
  int mid =  lo +(hi-lo)/2;
  // if(arr[mid] == arr[mid-1] || arr[mid] == arr[mid+1] ) {
  //         cout<<arr[mid];
  //         break;
  // }
  // else if( arr[mid] != arr[mid-1] || arr[mid] != arr[mid+1]){
  //            lo = mid +1; 
  // }
  // else{
  //   hi = mid -1;
  // }
  if(arr[mid] == mid +1){
    lo = mid +1;
  }
  else if ( arr[mid ] == mid){
          if(arr[mid] == arr[mid -1]){
            cout<<arr[mid];
            break;
          }
          else{
            hi = mid -1;
          }
  }
  
   

}



}