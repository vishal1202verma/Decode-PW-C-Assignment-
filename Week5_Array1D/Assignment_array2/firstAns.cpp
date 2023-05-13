// Count the number of elements strictly greater than x
#include<iostream>
using namespace std;
int main(){
 int arr[5];
 cout<<"enter the 5 element of array :"<<endl;
 for(int i=0; i<5; i++){
    cin>>arr[i];
 };
 int x;
 cout<<"enter the traget :";
 cin>>x;
 int ans =0;
 for(int i=0; i<5; i++){
    if(arr[i]>x){
        ans++;
    }
 }
  cout<<"total greater number :"<<ans<<endl;


}