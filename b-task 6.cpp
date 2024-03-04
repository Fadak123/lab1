#include <iostream>
using namespace std;
int main (){
    const int size = 7;
    int num[size]={1,2,3,4,5,6,7};
    int sum = 0;
    int i =0;
    for ( i=0;i<size;i++){
        sum=sum+num[i];
    }
    cout<<sum; 
   
 
  return 0;
}