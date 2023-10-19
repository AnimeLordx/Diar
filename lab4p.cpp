#include <iostream>
using namespace std;

int main() {
    int n;
    int sum =0;
    cin >> n;
    int array[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = n-1; i >= 0; i--) {
            sum+=array[i][n-1-i];
          }
    cout << sum;
    return 0;
}
