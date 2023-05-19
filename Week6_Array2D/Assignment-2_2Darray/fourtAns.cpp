// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enetr any integer :";
cin>>n;
int arr[n][n];
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
}

cout<<endl;
// spiral print 
 int minr =0;
 int minc =0;
 int maxr = n-1;
 int maxc = n-1;
 while(minr<=maxr && minc<=maxc){
// right
for(int j= minc ; j<=maxc; j++){
       cout<<arr[minr][j]<<" ";  
    }
    minr++;
     if(minr>maxr || minc>maxc)break;
// down
for(int i= minr; i<=maxr; i++){
    cout<<arr[i][maxc]<<" ";
}
 maxc --;
  if(minr>maxr || minc>maxc)break;
// left
for(int j= maxc ; j>=maxc; j--){
    cout<<arr[maxr][j]<<" " ;
}
maxr --;
 if(minr>maxr || minc>maxc)break;
//top
for(int  i= maxr; i>=maxr ; i--){
    cout<<arr[i][minc];
}
minc++;
 if(minr>maxr || minc>maxc)break;

 
}
}