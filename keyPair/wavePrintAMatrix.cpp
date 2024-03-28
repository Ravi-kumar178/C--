#include <iostream>
using namespace std;

void wavePrint(int mat[][4], int row, int col){
    if(row == 0){
        return;
    }
    
    for(int j = 0; j < col ; j++){
        if(j%2 == 0){
            for(int i = 0; i < row; i++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int i = row-1; i>=0; i--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
  int mat[][4] = {
                  { 1,2,3,4 },
                  { 5,6,7,8 },      
                  { 9,10,11,12 },
                  { 13,14,15,16 },
                  { 17,18,19,20 }    
                 } ;
  int row = 5;
  int col = 4;

  wavePrint(mat,row,col);
  return 0;
}
