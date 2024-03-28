#include <iostream>
using namespace std;


void printArray(int arr[], int size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

bool linearSearch(int arr[], int size, int target){
  for(int i = 0; i < size; i++){
    if(arr[i] == target){
      return true;
    }
  }
  return false;
}

int main(){
  int arr[5] = {2,4,6,8,10};
  int size = 5;
  int target = 10;

  //printing the array
  printArray(arr, size);

  bool found = linearSearch(arr, size, target);

  if(found){
    cout<<"Target is Present"<<endl;
    
  }
  else{
    cout<<"Target is absent"<<endl;
  }
  return 0;
}