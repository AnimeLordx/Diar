#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline (cin, s);
    for(int i=0; i < s.size(); i++){
        if(i%2==0 or i==0){
            if (s[i] >= 'a' && s[i] <= 'z') {
                cout << char(int(s[i])-32);
            }  else {
                cout << s[i]; 
            }
        }
        else{
            cout << s[i];
        }
        
    }
    return 0;
}
  
