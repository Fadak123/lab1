#include <iostream>
using namespace std;
int main (){
    const int size = 3;
    int arr [size];
    int n = 7 ;
    int i=0;
    int product = 1 ;
    while (i<=10){
        product=i*n;
        cout<<endl<<n<<"*"<<i<<"="<<product<<endl;
        i++;

    }
 
  return 0;
}
