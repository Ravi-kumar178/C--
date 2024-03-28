#include <iostream>
using namespace std;

int main(){
  int arr[5];
  int size = 5;

  //taking input 
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }

  int sum = 0;

  for(int i = 0; i < size; i++){
    sum = sum + arr[i];
  }

  cout<<"Sum of all the similar elements that in contained by an array is: "<<sum<<endl;
  return 0;
}