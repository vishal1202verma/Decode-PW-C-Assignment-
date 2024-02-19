// Print all the increasing sequences of length k from first n natural numbers
#include<iostream>
#include<vector>
using namespace std;
void subSquence( int arr[] , vector<int>ans, int n, int idx){
 if(n==idx){
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;

 }
 

 subSquence(arr, ans, n, idx+1);
 ans.push_back(arr[idx]);
 subSquence(arr, ans, n, idx+1);

}

int main (){
int arr[] ={1,2,3,};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>ans;
subSquence(arr, ans, n, 0);

}