#include <iostream>
using namespace std;

int main(){
  cout<<"Print Inverted Full Pyramid: "<<endl;
  int rowCount;
  cout<<"Enter the number of rows: ";
   cin >> rowCount;

  //for rows
  for(int row = 0; row < rowCount ; row = row+1){
    //for spaces
    for(int col = 0; col < row; col = col+1){
      cout<< " ";
    }
    //for star
    for(int col = 0; col < rowCount-row; col = col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  return 0;
  
}