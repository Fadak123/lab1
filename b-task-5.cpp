#include <iostream>
using namespace std;
int main (){
    const int size = 7;
    int num[size]={1,2,3,4,5,6,7};
    int min ;
    min=num[0];
    for (int i = 0 ;i<=6;i++){
        if (min >num[i]){
            min=num[i];
        }
    }
    cout<<"min="<<min;
 
  return 0;
}