#include<iostream>
using namespace std;

int main(){
  cout<<"Print Fancy Pattern"<<endl;
  int rowCount;
  cout<<"Enter the number of rows: ";
  cin>>rowCount;

  for(int row = 0; row < rowCount; row = row+1){
    for(int col = 0; col < row; col = col+1){
      cout<<(row+1)<<"*";
    }
    cout<<row+1;
    cout<<endl;
  }
  return 0;
}