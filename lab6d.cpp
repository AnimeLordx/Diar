#include <iostream>

using namespace std;

int main(){
    int n;
    int x;
    cin >> n;
    int  array[n];
    

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> x;
    for(int i=0; i<n; i++){
        if(array[i] == x){
            cout << "Yes";
            return 0;
        }
    } 
    cout << "No";
    return 0;
}
