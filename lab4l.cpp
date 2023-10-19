#include <iostream>
using namespace std;

int main()
{   
    int sum = 1000000;
    int sumi;
    int sum2i;
    int n;
    int m;
    cin >>n;
    cin >>m;
    int array[n][m];
     for (int i =0; i< n; i++) 
     {
        int sumj = 0;
        for (int j = 0; j < m; j++){
            cin >> array[i][j];
            sumj+= array[i][j];
        }if (sumj < sum){
                sumi = i;
                sum = sumj;}
    } cout << "coordinates of min elements:" <<endl ;
      for (int i = 0; i < m; i++) {
        int sum2 = array[0][i];
        for (int j = 0; j < n; j++) {
            if (array[j][i] < sum2) {
                sum2 = array[j][i];
                sum2i = j;
            }
        }
        cout << sum2i + 1 << ";" << i + 1 << endl;
    }
        cout << endl;
        cout << "Their sum:" ;
        cout << endl ;
        cout << sum;


    return 0;
}
