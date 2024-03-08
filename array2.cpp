#include <iostream>
using namespace std;

int main(){
  int arr[10];
  int size = 10;

  //take input in the array
  for(int i = 0; i < size; i++){
    cin>>arr[i];
  }

  //doubling the array
  for(int i = 0; i < size; i++){
    arr[i] = 2*arr[i];
  }
  //printing the array
  for(int i = 0; i< size; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}