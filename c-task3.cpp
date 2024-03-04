#include <iostream>
using namespace std;
int main()
{
int arrA[5],arrB[5],arrC[5];
cout<<"First Array (arrA) items: \n";
for (int i=0;i<5;i++)
{ cout<<"item#"<<i<<": ";
cin>>arrA[i];
}
cout<<"Second Array (arrB) items: \n";
for (int i=0;i<5;i++)
{ cout<<"item#"<<i<<": ";
cin>>arrB[i];
arrC[i]=arrA[i]+arrB[i];
}
cout<<"\nResulting Array items (arrC=arrA+arrB ) are: \n";
for (int i=0;i<5;i++)
cout<<arrC[i]<<endl;

return 0;
}