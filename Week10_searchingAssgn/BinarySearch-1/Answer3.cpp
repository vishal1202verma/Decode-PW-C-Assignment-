// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
#include<iostream>
using namespace std;
int main(){
int arr[] = {0,0,0,0,1,1};
int n = sizeof(arr)/sizeof(arr[0]);
int lo =0;
int hi = n-1;
int count =0;
int target = 1;
while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid] == target){
        count++;
    }
    else if (arr[mid]<target){
        lo = mid +1;
    }
    else{
        hi = mid-1;
    }
} 

cout<<count;


}