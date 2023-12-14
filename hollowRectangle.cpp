#include <iostream>
using namespace std;

int main() {
  cout<<"Print a Hollow Rectangle"<<endl;

  int rowCount;
  cout<<"Enter the number of rows: ";
  cin >> rowCount;

  int colCount;
  cout<<"Enter the number of cols: ";
  cin>>colCount;

  //for rows
  for(int row = 0; row < rowCount; row = row+1){
    if(row == 0 || row == rowCount-1){
      //for cols
      for(int col = 0; col < colCount; col = col+1){
        cout<<"*"<<" ";
      }
    }

    else{
      cout<<"*"<<" ";
      for(int col = 0; col < colCount-2; col = col+1){
        cout<<" "<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}