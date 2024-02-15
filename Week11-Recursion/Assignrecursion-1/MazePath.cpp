#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
  // base case
   if(sr>er || sc>ec ) return 0;
   if(sr == er && sc == ec) return 1;
   int rightWays =  maze(sr, sc+1, er, ec);
   int downWays = maze(sr+1, sc, er, ec);
   return rightWays+downWays;
}
int main (){
  cout<<maze(0,0,2,2);
  
     


}