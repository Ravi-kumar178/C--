#include<iostream>
using namespace std;

int main(){
  cout<<"Print the Hollow Half Pyramid"<<endl;
  int rowCount;
  cout<<"Enter the number of rows: ";
  cin>>rowCount;

  //for rows
  for(int row = 0; row < rowCount ; row = row+1){
    if(row == 0){
      for(int col = 0; col < rowCount; col = col+1){
        cout<<"*";
      }
    }
    else{
      cout<<"*";
      for (int col = 0; col < (rowCount-row-2); col=col+1){
          cout<<" ";
        }
      if(row != rowCount-1){
        cout<<"*";
      }
    }
    cout<<endl;
  }
  return 0;
}