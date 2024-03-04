#include <iostream>
using namespace std;
int main()
{
int arrA[5],arrB[5],arrC[10];
cout<<"First: items of array (arrA): \n";
for (int i=0;i<5;i++)
{ cout<<"Enter the item "<<i<<" of (arrA): ";
cin>>arrA[i];
arrC[i]=arrA[i];
}
cout<<"Second: items of array (arrB): \n";
for (int i=0;i<5;i++)
{ cout<<"Enter the item "<<i<<" of (arrB): ";
cin>>arrB[i];
arrC[i+5]=arrB[i];
}
cout<<"\nArray arrC items are: \n";
for (int i=0;i<10;i++)
cout<<arrC[i]<<endl;

return 0;
}