#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8,10,12};
    int target = 10;

    int size = 6;
    int index;
    bool found = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            found = 1;
            index =i;
            break;
        }
    }

    if(found){
        cout<<"Index of target element: "<<index<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}