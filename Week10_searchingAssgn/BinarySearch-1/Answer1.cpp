// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If 
// ‘x’ does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6
#include<iostream>
using namespace std;
int main (){
int arr[] = {1,2,3,3,4,4,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int lo =0;
int hi = n-1;
while(lo<=hi){
    int mid = lo + (lo-hi)/2;
    cout<<mid;
}




}