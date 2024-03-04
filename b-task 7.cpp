#include <iostream>
using namespace std;
int main (){
    const int size = 7;
    int num[size]={1,2,3,4,5,6,7};
    int max=num[0] ;
    // max=num[0];
    int i;
    for ( i = 0 ;i<size;i++){
        if (num[i]>max){
            max=num[i];
        }
    }
    cout<<"max="<<max;
 
  return 0;
}