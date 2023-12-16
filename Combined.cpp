#include<iostream>
using namespace std;

int main(){
  int rowCount;
  cout<<"Enter the nummber of rows: ";
  cin >> rowCount;

  int n = rowCount/2;

  for(int row = 0 ; row < n; row = row+1){
    //InvertedPyramid1
    for(int col = 0 ; col < n-row; col=col+1){
      cout<<"*";
    }
    //full pyramid
    for(int col = 0; col < (2*row+1); col = col+1){
      cout<<" ";
    }
    //InvertedPyramid2
    for(int col = 0; col < (n-row); col = col+1){
      cout<<"*";
    }
    cout<<endl;
  }

  //for 2nd portion
  for(int row = 0; row < n; row = row+1){
    //pyramid
    for(int col = 0; col < row+1; col = col+1){
      cout<<"*";
    }
    //spaces
    for(int col = 0; col < (2*n - 2*row-1); col = col+1){
      cout<<" ";
    }

    //pyramid2
    for(int col = 0; col < (row+1); col = col+1){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}