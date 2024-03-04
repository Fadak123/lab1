#include <iostream>
using namespace std;
int main()
{
int arraySize;
cout<<"Enter number of students: ";
cin>>arraySize;
int marks[arraySize];
string names[arraySize];
//reading array
for (int i=0;i<arraySize;i++)
{
cout<<"Enter student#"<<(i+1)<<" name: ";
cin>>names[i];
cout<<"Enter student#"<<(i+1)<<" mark: ";
cin>> marks[i];
}
//finding the student with the highest mark
int maxIndex=0;
for (int i=0;i<arraySize;i++)
{
if (marks[i]>marks[maxIndex])
maxIndex=i;

}
cout<<"\nResults: ";
cout<<"\nStudent with max mark is " <<names[maxIndex]<<" of mark "<< marks[maxIndex];
//calculating array average
double average, total=0;
for (int i=0;i<arraySize;i++)
total+= marks[i];
average=total/arraySize;
cout<<"\nStudents Average = "<< average;
cout<<"\nStudents with marks above average are: ";
for (int i=0;i<arraySize;i++)
{
if (marks[i]> average)
cout<<endl<<names[i];

}
return 0;
}