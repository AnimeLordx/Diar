#include <iostream>

using namespace std;

string found(int n);

int main()
{
    int a;
    cin>>a;
    cout<<found(a);
}

string found(int n){
    bool find=false;
    int array[n], j=0, x;
    for(int i = 0; i<n; i++){
        cin>>array[i];
    }
    cin>>x;
    for(int i = 0; i<n; i++){
        if(array[i]==x){
            find=true;
            break;
        }
        else{
            j++;
        }
    }
    if(find==true){
        return "Yes";
    }
    else{
        return "No";
    }
}
