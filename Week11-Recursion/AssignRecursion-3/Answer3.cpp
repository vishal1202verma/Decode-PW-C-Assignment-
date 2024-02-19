// Given two sorted arrays A and B, generate all possible arrays such that the first element is taken 
// from A then from B then from A, and so on in increasing order till the arrays are exhausted. The 
// generated arrays should end with an element from B.
// A = {10, 15, 25}
// B = {1, 5, 20, 30}
// Output: {10 20}, {10 20 25 30}, {10 30}, {15 20}, {15 20 25 30}, {15 30}, 
// {25 30}
#include<iostream>
#include<vector>
using namespace std;
void generateAlternateArrays(vector<int> &arr1, vector<int> &arr2, int i, int j, 
vector<int> &temp, bool isFromA) {
 if(isFromA) {
 for(int k = 0; k < temp.size(); ++k) {
 cout << temp[k] << " ";
 }
 cout << endl;
 }
 
 if(isFromA) {
 for(int k = i; k < arr1.size(); ++k) {
 if(temp.size() == 0) {
 temp.push_back(arr1[k]);
 generateAlternateArrays(arr1, arr2, k+1, j, temp, !isFromA);
 temp.pop_back();
 } else {
 if(arr1[k] > temp.back()) {
 temp.push_back(arr1[k]);
 generateAlternateArrays(arr1, arr2, k+1, j, temp, !isFromA);
 temp.pop_back();}
 }
 }
 }
}


int main (){
    int a[] = {10, 15, 25};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int>arr1(a, a+n);
    int b[] = {1, 5, 20, 30};
    int m  = sizeof(b)/sizeof(b[0]);
    vector<int>arr2(b, b+m);
    vector<int>temp;
    generateAlternateArrays(arr1, arr2, 0, 0, temp, true);
    
}