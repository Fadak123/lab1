#include <iostream>
using namespace std;
int main()
{ int arraySize;
cout<<"Enter number of students: ";
cin>>arraySize;
double num[arraySize],noPassed=0,noFailed=0,noIncorrect=0;
//reading array
cout<<"Enter students marks: \n";
for (int i=0;i<arraySize;i++)
{
cin>>num[i];
if (num[i]>59)
noPassed++;
else if (num[i]<=59 && num[i]>=0)
noFailed++;
else
noIncorrect++;

}
double percPassed,percFailed,percInvalid;
percPassed=noPassed/arraySize*100;
percFailed=noFailed/arraySize*100;
percInvalid=noIncorrect/arraySize*100;
cout<<"\nResults: ";
cout<<"\nPercentage of passed students= "<<percPassed<< " %";
cout<<"\nPercentage of failed students= "<<percFailed<< " %";
cout<<"\nPercentage of incorrect students= "<<percInvalid<< " %";
return 0;
}