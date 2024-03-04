#include <iostream>
using namespace std;
int main()
{
int arraySize;
cout<<"Enter your original array size: ";
cin>>arraySize;
int original[arraySize],reversedArray[arraySize];
cout<<"Enter original array items: \n";
for (int i=0;i<arraySize;i++)
cin>>original[i];
for (int i=0,j=arraySize-1;i<arraySize;i++,j--)
reversedArray[j]=original[i];
cout<<"You arrays items are: \n";
cout<<"Index\tOriginal Array\tReversed Array\n";
for (int i=0;i<arraySize;i++)
cout<<i<<"\t"<<original[i]<<"\t\t"<<reversedArray[i]<<endl;

return 0;
}