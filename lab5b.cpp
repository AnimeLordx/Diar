#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i=0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << s[i];
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            cout << char(int(s[i])-32);
        }
    }


    return 0;
}
