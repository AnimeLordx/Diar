#include <iostream>
#include <cmath>
using namespace std;  
bool isPrime(int n) {
         if(n == 1) return false;
        
        for(int i=2;i*i<=n;i++) {
            if(n % i == 0) return false;
        }
        
        return true;
}
int main()  
{  
  int n, i, m=0, flag=0; 
  int high;
  cin>>high;
  for(i = 1; i <= high; i++)  
  {  
      if(isPrime(i)){
          cout<<i<<" is prime"<<endl;
      }
  }  
  return 0;  
}
