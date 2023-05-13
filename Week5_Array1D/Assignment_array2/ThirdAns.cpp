// Check if the given array is sorted or not
#include<iostream>
using namespace std;
int main(){
  int arr[5] = {2, 3 ,3 ,4, 5,};
   for(int i=0; i<5; i++){
       for(int j =i+1; j<5; j++){
           if(arr[i]<=arr[j]){
            cout<<"array is sorted ";
           }
           else {
            cout<<"array is not sorted ";
           }
           break;
       }
       break;
   }


}