#include<iostream>
using namespace std;

void countZeroOne(int arr[], int size){
    int countZero = 0;
    int countOne = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            countZero++;
        }
        else if(arr[i] == 1){
            countOne++;
        }
    }

    cout<<"The number of Zero Present in the array is: "<<countZero<<endl;
    cout<<"The number of one present in the array is: "<<countOne<<endl;
}

int main(){
    int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
    int size = 15;

    countZeroOne(arr,size);
    return 0;
}