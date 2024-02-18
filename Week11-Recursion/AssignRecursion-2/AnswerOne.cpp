// Print all the elements of an array in reverse order.
#include<iostream>
using namespace std;
void PrintDisplay(int arr[], int n, int idx){
  // base case 
  if(n == idx) return ;
  cout<<arr[idx]<<" ";
  PrintDisplay(arr, n, idx-1 );
  
}


int main (){
int arr [] = {1,2,3,4,5,6};
int n  = sizeof(arr)/sizeof(arr[0]);
PrintDisplay(arr, 0, n-1);
return 0;

}
