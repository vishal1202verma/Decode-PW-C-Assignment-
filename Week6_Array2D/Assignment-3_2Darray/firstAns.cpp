// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
#include<iostream>
using namespace std;
int main(){
int arr[3][3] = {1, 1, 1,1, 0, 1,1, 1, 1};
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if( i+j ==1 || i+j ==3){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
}
}
//output
// 1 0 1
// 0 0 0
// 1 0 1