#include<iostream>
using namespace std;

int main(){
  cout<<"Print Hollow Inverted Pyramid"<<endl;

  int rowCount;
  cout<<"Enter the number of rows: ";
  cin>>rowCount;

  //for rows
  for(int row = 0; row < rowCount; row = row+1){

    //for spaces
    for(int col = 0; col < row; col = col+1){
      cout<<" ";
    }

    cout<<"*";

    //for spaces
    for(int col = 0; col < (2*rowCount-2*row-3); col = col+1){
      cout<<" ";
    }

    if(row != rowCount-1){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}