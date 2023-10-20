#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum ;
    int sumi;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] > sum) {
            sum = s[i];
            sumi = i;
        }
    }
    cout << s[sumi];
    
    

    return 0;
}
