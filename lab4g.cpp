#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n][n];

    for (int i = 1; i <= n; i++) {
        for (int j = n; j > 0; j--) {
            if (j > i) {
                cout << ".";
            } else if (j == i) {
                cout << i;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
