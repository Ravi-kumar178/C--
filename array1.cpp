#include <iostream>
using namespace std;

int main(){
/*   int a = 5;
  cout<<"address of a: "<<&a<<endl;

  int arr[5];
  cout<<"adress of arr is: "<<arr<<endl;
  cout<<"adress of arr is: "<<&arr<<endl;
  cout<<"Size of: "<<sizeof(a)<<endl;
  cout<<"Size of: "<<sizeof(arr)<<endl; */

 /*  int arr[5] = {3,5,8,9,12};
  cout<<arr[0]<<endl;
  cout<<arr[1]<<endl;
  cout<<arr[2]<<endl;
  cout<<arr[3]<<endl;
  cout<<arr[4]<<endl;

  //printing the array
  for(int i = 0; i < 5; i++){
    cout<<arr[i]<<" ";
  } */

  int arr[5];
  int size = 5;

  for(int i = 0; i < size; i++){
    cin>>arr[i];
  }

  //printing the array
  for(int i = 0 ; i < size; i++){
    cout<<arr[i]<<" ";
  }
}