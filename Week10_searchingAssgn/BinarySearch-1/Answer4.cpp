// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the 
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2                
#include<iostream>
#include<vector>
using namespace std;
int main (){
int arr[3][4] = {0,0,1,1,1,1,1,1,0,0,0,0};
int m = 3; // rows
int n = 4; // columns 
bool flag = false;
int firstIdx = -1;
int maxOnes = -1;
int row =0;
for(int i=0; i<m; i++){
int count =0;    
int lo = 0;
int hi = n-1;
while(lo<=hi){
    int mid = lo +(hi -lo)/2;
    if(arr[i][mid] == 1){
        if(mid ==0){
           flag = true;
           firstIdx = mid;
           break;
        }
        else if (arr[i][mid-1] != 1){
            firstIdx= mid;
            break;
        }
        else{ // arr[i][mid -1] == 1
            hi = mid -1;
        }
    }
    else if ( arr[i][mid]<1){
        lo = mid +1;
    }
    else{
        hi = mid -1;
    }
}
if(firstIdx == -1) cout<<count;
else count = n-firstIdx; 
if(maxOnes <count)
maxOnes = count;
row = i;

}
cout<<"MaxCount of Ones is ==>"<<maxOnes<<" And "<<"Row No of MaxOnes is ==>"<<row;

}