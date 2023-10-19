#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin >>n;
    cin >> m;
    int array[n][m];
    int sum = 0;
    for (int i =0; i< m; i++)
    {
        for (int j =0; j< n; j++){
            cin >> array[i][j];

            if( array[i][j] < 0) {
            sum++;
    }
        }
    }
             cout << sum;
    return 0;
}
