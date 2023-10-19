#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int array[n][n];
    int sum = -10000000;
    int sum2 = -10000000;
    for (int i =0; i< n; i++)
    {
        for (int j =0; j< n; j++){
            cin >> array[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
    
            if( array[i][j] > sum) {
            sum2 = sum;
            sum =array[i][j];
    }else if(array[i][j] > sum2 && array[i][j] < sum){
        sum2 = array[i][j];
    }
        }
    }
   if(array[0][0] == array[0][1] == array [1][1] == array[2][0]){
                cout << "0";}
                else { cout<< sum2;}
    return 0;
}
