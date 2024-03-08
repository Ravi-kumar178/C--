#include <iostream>
using namespace std;

int factorial(int number){
  int fact = 1;
  if(number == 0){
    return 1;
  }
  else {
    for(int i = 1;i<=number;i++){
      fact = fact*i;
    }
  }
  return fact;
}

int main(){
  int number;
  cin>>number;

  int store = factorial(number);
  cout<<store<<endl;
  return 0;
}