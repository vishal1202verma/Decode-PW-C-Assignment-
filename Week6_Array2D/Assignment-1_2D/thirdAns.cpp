// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the 
// rectangle from (l1,r1) to (l2, r2)
#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the row number of matrix A :";
cin>>n;
int m;
cout<<"enter the columns number of matrix B :";
cin>>m;
int A [n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>A[i][j];
    }
}
cout<<endl;
// print 
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if( i ==j  ){
            cout<<A[i][j] +A[i][j]<<" ";
        }
        else{
            cout<<A[i][j]<<" ";
        }
    }
    cout<<endl;
}


}