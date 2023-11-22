// WAP to find the smallest missing positive element in the sorted Array that contains only 
// positive elements
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 vector<int>v;
 v.push_back(4);
 v.push_back(3);
 v.push_back(8);
 v.push_back(6);
 v.push_back(9);
 v.push_back(8);
//  Taking input 
//  for(int i=0; i<v.size(); i++){
//     int x;
//     cin>>x;
//     v.push_back(x); 

//  } 
 sort(v.begin(), v.end());
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}

