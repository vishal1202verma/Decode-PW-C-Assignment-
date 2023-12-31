// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
string s = "abcdefgh";
int n  = s.size();
reverse(s.begin()+n/2, s.end());
cout<<"the half the reverse string is :";
for(int i=0; i<n; i++){
    cout<<s[i];
}







}