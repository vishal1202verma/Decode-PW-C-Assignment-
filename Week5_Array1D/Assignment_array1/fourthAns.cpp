#include<iostream>
using namespace std;
int main(){

// Given an array, predict if the array contains duplicates or not
int arr[ 5] = {2 ,3 ,4 ,4, 5,};
int i = 0;
int j= sizeof(arr)/sizeof(arr[0]);
while(i<j){
  if(i==j){
    cout<<"present";
  }
  i++;
  j--;
}

}