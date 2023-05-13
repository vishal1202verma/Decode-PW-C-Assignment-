// 5.)Given an array of integers, change the value of all odd indexed elements to its second multiple 
// and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main(){
 int arr[] ={2, 3, 5, 13 ,9, 12 ,4 , 6};
 int n = sizeof(arr)/sizeof(arr[0]);
 for(int i=0; i<n; i++){
    // first question odd element replaced by second multiple 
     if(arr[i]%2 !=0 ){
        int oddnumber = arr[i];
        // cout<<oddnumber<<" ";
        int Secondmultiple  =arr[i]*2;  
        // cout<<Secondmultiple<<" ";   
        int temp = oddnumber;
        oddnumber = Secondmultiple;
        Secondmultiple = temp;  
        cout<<oddnumber<<" ";  
     } 
 }
     cout<<endl;
     // 2.) even element is increment by 10
     for(int i=0; i<n; i++){
        if( arr[i] %2 ==0){
         int Evennumber  = arr[i] +10;
         cout<<Evennumber<<" ";
        }
     }
                        


}