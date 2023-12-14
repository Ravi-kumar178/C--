#include <iostream>
using namespace std;

int main(){
  cout<<"Diamond Pattern: "<<endl;

  cout<<"Enter the number of row: ";
  int rowCount;
  cin>>rowCount;

  rowCount /= 2;

  //for rows
  for(int row = 0; row < rowCount ; row = row+1){
    //for spaces
    for(int col = 0; col < rowCount-row-1; col = col+1){
      cout<<" ";
    }
    //for stars
    for(int col = 0; col < row+1; col = col+1){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }

  //for Inverted
   for(int row = 0; row < rowCount ; row = row+1){
     //for spaces
     for(int col = 0; col < row; col = col+1){
       cout<<" ";
     }
     //for star
     for(int col = 0; col < rowCount - row; col=col+1)     {
       cout<<"* ";
     }
     cout<<endl;
   }
  return 0;
}