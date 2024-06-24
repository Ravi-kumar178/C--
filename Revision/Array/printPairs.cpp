#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printPairs(vector<int>nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<"("<<nums[i]<<","<<nums[j]<<")"<<" ";
        }
        cout<<endl;
    }
}

int main(){
   vector<int>nums = {1,2,3};
   printPairs(nums);
   return 0;
}