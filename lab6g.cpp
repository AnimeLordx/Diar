#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline (cin, s);
    int sum =0;
    for(int i=0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u'||s[i] == 'A' || s[i] =='E' || s[i] =='I' || s[i] =='O' || s[i] =='U'){
          sum ++;
        }else{
            cout << s[i];
        }
    }
    
    return 0;
}
