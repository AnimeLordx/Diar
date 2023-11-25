#include <iostream>
#include <cmath>
using namespace std;

string find(int n);

int main()
{
    unsigned int x;
    cin>>x;
    cout<<find(x);
}

string find(int n){
    int y=0;
    bool yes=false;
    for(int i = 0; i<64; i++){
        if(n==pow(2,i)){
            yes=true;
        }
        else{
            y++;
        }
    }
    if(yes==true){
        return "Yes";
    }
    else{
        return "No";
    }
}
