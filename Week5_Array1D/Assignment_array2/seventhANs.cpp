// If an array arr contains n elements, then check if the given array is a palindrome or not .
// panlindrome array 12321
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number of n :";
  cin>>n;
  cout<<endl;
  int arr[n];
  cout<<"enter the element of array"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  for(int i=0; i<=n-4; i++){
    for(int j=n-1; j>n-3; j--){
         if(arr[i] == arr[j]){
          cout<<"array is plaindrome";
         }
         
         break;      
    }
   
  }
                         



}