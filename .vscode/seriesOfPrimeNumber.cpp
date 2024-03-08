#include<iostream>
using namespace std;

bool isPrime(int number){
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cin>> number;
    
    for(int i = 2; i <= number; i++){
        bool isIPrime = isPrime(i);
        if(isIPrime){
            cout<< i<<" ";
        }
    }
    return 0;
    
}