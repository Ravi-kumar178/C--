#include <iostream>
using namespace std;

int main(){
  cout<<"Print the Half Pyramid: "<<endl;
  int rowCount;
  cout<<"Enter the number of rows: ";
  cin>>rowCount;

  //for rows
  for(int row=0; row<rowCount; row = row+1){
    //for col
    for(int col = 0; col < row+1; col = col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  return 0;
}