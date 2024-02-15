// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 
// steps at each level.
#include<iostream>
using namespace std;
int StairsClimb(int n ){
    if(n<0) return 0;
    else if( n==0 ) return 1;
    // else if(n==3) return 4;
    else{
        return StairsClimb(n-1) + StairsClimb(n-2) + StairsClimb(n-3);
    }
}
int main (){
cout<<StairsClimb(5);    


}