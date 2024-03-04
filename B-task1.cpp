#include <iostream>
using namespace std;
int main (){
    int i=0;
    for (i=1;i<=100;i++){
        if(i%2!=0)
        continue;
        else
        cout<<i<<"";
    }
 
  return 0;
}
