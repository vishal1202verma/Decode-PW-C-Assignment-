#include<iostream>
using namespace std;
int ProductResult( int arr[], int n){
     int   product = 1;
    for(int i=0; i<n; i++){
       product*= arr[i];
    }
    return product;

}
int main(){
// ques no 1 Calculate the product of all the elements in the given array.
    // int product =1;
    // int i=0;
    // int j = sizeof(arr)/sizeof(arr[0])-1;
    // while(i<j){
    //     product*= arr[i]* arr[j];
    //     i++;
    //     j--;
    // }
    //    if(i==j){
    //     product*= arr[i];
    //     }
    //     cout<<product; 
    int arr[ ] = {2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<ProductResult(arr, n);




     
   }
   


   
