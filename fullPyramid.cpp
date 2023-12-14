#include<iostream>
using namespace std;

int main(){
  cout<<"Full Pyramid: "<<endl;
  int rowCount;
  cout<<"Enter the no. of rows: ";
  cin>>rowCount;

  for(int row=0; row < rowCount; row = row+1){
    //for spaces;
    for(int col = 0; col < rowCount-row-1; col =col+1){
      cout<<" ";
    }
    //for star
    for(int col = 0; col < row+1; col = col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  return 0;
}