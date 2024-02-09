// int arr[5]={7,2,32,5,20}; sort this array in Decending order
#include<iostream>
#include<algorithm>
using namespace std;
int main (){
int arr[5] = {7,2,32,5,20};
for(int i=0; i<4; i++){
    for(int j= i+1; j<5; j++){ // bettter buble sort
        if(arr[i]<arr[j]){ // Decending order bubble Sort 
            swap(arr[i], arr[j]);
        }
    }
}
// printing the sorted array
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}

}