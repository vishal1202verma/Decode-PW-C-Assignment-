// Check if an array is a subset of another . 
#include<iostream>
using namespace std;
int main (){
 int arr1[5] ={1, 2 ,3, 4 ,5};
 int arr2[3] = {1 ,2 ,3};
 for(int i=0; i<5; i++){
    for(int j=0; j<3; j++){
        if(arr1[i] == arr2[j]){
            cout<<"array is subset of another array";
        }
            break;
    }
 } 









}