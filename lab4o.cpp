#include <iostream>
using namespace std;

int main() {
    int n;
    int sum =-100000000;
    int sum2;
    int sum2i;
    cin >> n;
    int array[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
            if(array[i][i] > sum){
                sum2 = array[i][i];
                sum2i = i;
                while(array[i][i] > sum){
                    sum++;
                }
            }
        
    }
    cout << "Maximum element is: "<< sum2 << " with coordinates: " << sum2i+1 << ";" << sum2i+1;
    return 0;
}
