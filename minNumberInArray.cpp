//Minimum number in an std::array

#include<iostream>
#include<limits.h>
using namespace std;

int minimumNumber(int arr[], int size){
    int num = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < num){
            num = arr[i];
        }
     /*  num =  min(num,arr[i]); */
    }
    return num;
}

int main(){
    int arr[] = {5,8,2,3,4};
    int size = 5;

    int minNumber = minimumNumber(arr, size);
    cout<<"The minimum Number of an array is: "<<minNumber<<endl;
    return 0;
}