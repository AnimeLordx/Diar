#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int A = 0, a = 0;

    for (int i=0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            A++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            a++;
        }
    }

    cout << a << " " << A;

    return 0;
}
