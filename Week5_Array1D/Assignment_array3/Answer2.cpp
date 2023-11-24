#include<iostream>
using namespace std ;
int main(){
int arr[6] = {2,3, 4, 5, 6, 0};
int max = arr[0];
for(int i=0; i<6; i++){
    if(max<arr[i]){
        max = arr[i];
    }
}
// cout<<max;
// finding factorial of largest number of array
int fact =1;
for(int i=2; i<=max; i++){
    fact = fact*i;
}
cout<<"factrorial of thr larget number of aray is :"<<fact;
}