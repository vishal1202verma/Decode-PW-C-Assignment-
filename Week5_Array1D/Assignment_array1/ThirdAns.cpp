#include<iostream>
using namespace std;
int main(){
    // Find the minimum value out of all elements in the array
    int arr[9] = {8, 4 ,7 ,9 ,2, 3, 4, 5, 6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int min = n;
    for(int i=n-1; i>0; i--){
      if(min>arr[i]){
          min = arr[i];
      }    
    }       

 cout<<"the minimum element of the array is :"<<min;
 

}