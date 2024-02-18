// Print index of a given element in an array. If not present, print -1
#include<iostream>
using namespace std;
int PrintIndex( int arr[], int n, int target , int idx ){
    int tgtIdx = -1;
        // iterative way
        // for(int i=0; i<n; i++){
        //     if(arr[i] == target){
        //         idx = i;
        //         return idx;
        //     }
        // }
        // return idx;

       // Now We will do it by Recursion Method
       if(n==idx) return tgtIdx;
       if(target == arr[idx]){
           tgtIdx = idx;
           return tgtIdx;
       }
       PrintIndex(arr, n, target, idx+1);

}      

int main (){

    int arr [] = {2, 3, 5, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The Target index of this Arrray is :";
    cout<<PrintIndex(arr, n, 8, 0);

    
}
