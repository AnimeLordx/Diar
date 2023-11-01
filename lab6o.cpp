#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
   int sum=0; 
   int lox =0;
  string s;
  cin >> s;
        for(int i=0; i<s.size(); i++){
    sum++;
    lox +=int(char(s[i])-48);
  }
  if (lox % int(char(s[sum-1])-48) ==0){
    cout<< "Yes";
  }else {
    cout << "No";
  }


  return 0;
}
