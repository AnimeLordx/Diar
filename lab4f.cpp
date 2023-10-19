#include <iostream>
using namespace std;

int main()
{
    int sum=-1000000;
    int sumi;
    int sumj;
    int n;
    cin >>n;
    int array[n][n];
     for (int i =0; i< n; i++)
    {
        for (int j =0; j< n; j++){
            cin >> array[i][j];
        }
    }
    for (int i =0; i< n; i++){
        for (int j =0; j< n; j++){
            if (array[i][j] > sum){
                sumi = i;
                sumj = j;
                sum = array[i][j];
            }
            
        }
    }
    cout << sumi+1 << ' ' << sumj+1 ;
    return 0;
}
