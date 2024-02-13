// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,0,0,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int count = 0; // T.C. = O(n);
    // for(int i=0; i<12; i++){
    //       if(arr[i] ==1){
    //         count++;
    //       }
    // } 
    // cout<<count;

    // Noe We will solve this Problem in T.C = O(logn)
    int lo =0;
    int hi = n-1;
    bool flag = false;
    int FirstOccurence = -1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid] == 1){
            if(mid ==0){
            flag = true;
            FirstOccurence = mid;
            break;
            }
            else if (arr[mid-1] != 1){
                FirstOccurence = mid;
                break;
            }
            else{ // arr[mid -1] == 1
                hi = mid -1;
            }
           
        }
        else if( arr[mid]<1) lo = mid +1;
        else hi = mid -1;
       
    }
    cout<<n-FirstOccurence;


}