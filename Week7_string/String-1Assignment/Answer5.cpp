// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12
#include<iostream>
#include<algorithm>
#include<climits>
#include<string>
using namespace std;
int main (){
// string s = "3244";
// int n = stoi(s);
// cout<<"the integer form of the string is :"<<n;
 string s = "3244";
//  cin >> s;
 int val = 0, pw = 1;
 while (s.size()) {
 val += pw * (s.back() - '0');
 s.pop_back();
 pw *= 10;
 }
 cout << val;


}