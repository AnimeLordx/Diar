#include <iostream>

using namespace std;

int main(){
    int n;
    int c;
    cin >> n;
    int array[n];
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        c = array[i] - arr[i];
        if (c<0){
            cout << c * -1<< " ";
        }else cout << c << " ";
    }
    return 0;
}
