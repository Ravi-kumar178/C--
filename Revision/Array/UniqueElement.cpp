#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int uniqueNumber(vector<int>nums){
    int size = nums.size();
    sort(begin(nums),end(nums));
    
    for(int i = 0; i < size; i+=2){
        if(nums[i] != nums[i+1]){
            return nums[i];
            break;
        }
    }
    return -1;
};

int main(){
   vector<int>nums = {2,10,11,13,10,2,15,13,15};
   int number = uniqueNumber(nums);
   cout<<"unique Number is: "<<number<<endl;
   return 0;
}