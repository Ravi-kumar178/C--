#include<iostream>
using namespace std;

int main(){

  cout<<"Print the Hollow Diamond"<<endl;
  int rowCount;
  cout<<"Enter the number of rows: ";
  cin>>rowCount;
  int n = rowCount/2;

  //for Hollow Pyramid
  for(int row = 0; row < n ; row = row+1){
    //for spaces
    for(int col = 0; col < (n-row-1); col = col+1){
      cout<<" ";
    }
    //for star
    cout<<"*";
    //for spaces
    for(int col = 0; col < (2*row - 1); col = col+1){
      cout<<" ";
    }
    if(row != 0){
      cout<<"*";
    }
    cout<<endl;
  }

  //for Inverted Hollow Pyramid
  for(int row = 0; row < n; row = row+1){
    //for spaces 
    for(int col = 0; col < row; col = col+1){
      cout<<" ";
    }
    //for star
    cout<<"*";

    //for spaces
    for(int col = 0; col < (2*n-2*row-3); col = col+1){
      cout<<" ";
    }

    if(row != n-1){
      cout<<"*";
    }
    cout<<endl;
  }
  return  0;
}