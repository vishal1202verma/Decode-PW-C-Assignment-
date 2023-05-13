#include<iostream>
using namespace std;
int main(){
// Find the second largest element in the given Array in one pass
 int arr[9] = {8, 4 ,7 ,9 ,2, 3, 4, 5, 6};
 int n= sizeof(arr)/sizeof(arr[0]);
 int max = 0;
 for(int i=0; i<n; i++){
      if(max<arr[i]){
          max = arr[i]-1;
      }    
 }
 cout<<"Second largest element is :"<<max;
 
 


}