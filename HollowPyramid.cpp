#include<iostream>
using namespace std;

int main() {
  cout<<"Print the hollow Pyramid: "<<endl;
  int rowCount;
  cout<<"Enter the number of rows: ";
  cin>>rowCount;

  //for rows
  for(int row = 0; row < rowCount; row = row+1){
    //for spaces
    for(int col = 0; col < rowCount-row-1; col = col+1)  
    {
      cout<<" ";
    }
    cout<<"*";
    for(int col = 0; col < (2*row-1); col = col+1){
      cout<<" ";
    }
    if(row != 0)
     cout<<"*";
    cout<<endl;
  }
  return 0;
}