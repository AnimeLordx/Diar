#include <iostream>
using namespace std;

int main(){
  string  s;
    cin >> s;
    if (s[0] >= 'A' && s[0] <= 'Z') {
            cout << s[0];
        } else if (s[0] >= 'a' && s[0] <= 'z') {
            cout << char(int(s[0])-32);
        }
  return 0;
}
