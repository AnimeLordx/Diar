#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "0 ";
    for (int i = 1; i < n; i++) {
        cout << i << "\t";
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        cout << i << " ";
        for (int j = 1; j < n; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
