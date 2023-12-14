#include<iostream>
using namespace std;

int main(){
  cout<<"Print the Inverted Numeric Half Pyramid: "<<endl;
  int rowCount;
  cout<<"Enter the number of rows: ";
  cin >> rowCount;

  //for rows
  for(int row = 0; row < rowCount; row = row+1){
    //for columns
    for(int col = 0; col < rowCount-row ; col = col+1){
      cout<< col+1<<" ";
    }
    cout<<endl;
  }
  return 0;
}