#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter the number of row: ";
  cin >> rowCount;
  int colCount;
  cout<<"Enter the number of column: ";
  cin>>colCount;

  //for rows
  for(int row=0; row < rowCount; row = row+1){
    //for column
    for(int col = 0; col < colCount; col = col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }  
  return 0;
}