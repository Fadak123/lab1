#include <iostream>
using namespace std;
int main (){
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size]={};
    int sum=0;
    
    for (int i=0;i<size;i++){
      cout<<"enter iteam";
      cin>>arr[i];
      sum=sum+arr[i];
      
      
    }
    int min=arr[0];
    int max=arr[0];
    for (int i=0;i<size;i++){
      if(min>arr[i]){
        min=arr[i];
      }
      if(max<arr[i]){
        max=arr[i];
      }
    }

    int ave=sum/size;
    cout<<sum<<endl<<ave<<endl<<min<<endl<<max<<endl<<"program end";
  
  return 0;
}