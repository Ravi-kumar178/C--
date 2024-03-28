//call by value and reference variable

#include<iostream>
using namespace std;

int incrementBy1(int n){ //Here the value of n is stored at different address
    n++;
    return n;
}

void incrementBy2(int &n){
    n = n+2;
}

int main(){
    int n;
    cin >> n;
    cout<<"n : "<<n<<endl;
    int &k = n;            //Reference variable states that the alias name given to the declared named variable
    cout<<"k : "<<k<<endl;
    
    
    int ans = incrementBy1(n);
    
    cout<<"ans is: "<<ans<<endl;
 
    
    incrementBy2(n);
    
    cout<<"n is: "<<n<<endl;
    
       return 0;
}