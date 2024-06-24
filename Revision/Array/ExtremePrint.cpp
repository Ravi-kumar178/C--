#include<iostream>
#include<vector>
using namespace std;

void extremePrint(vector<int>arr){
    int n = arr.size();
    int i = 0; 
    int j = n-1;
    while(i <= j){
        if(i == j){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" "<<arr[j]<<" ";
        }
        i++;
        j--;
    }
}

int main(){
    vector<int>arr={10,20,30,40,50,60};
    extremePrint(arr);
    return 0;
}