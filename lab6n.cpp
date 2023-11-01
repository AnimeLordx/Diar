#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int m;
  int n;
  cin >>n;
  cin >> m;
  int arr[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> arr[i][j];
    }
  }
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout << arr[j][i]<<" " ;
    }cout << endl;
  }



  return 0;
}
