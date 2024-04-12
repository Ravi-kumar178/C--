 public:
    vector<long long> lcmAndGcd(long long A , long long B) {
          long long a = A;
        long long b = B;
        
        vector<long long>ans;
         long long hcf = 0;
        
        if(A == 0) hcf = B;
        else if(B == 0) hcf = A;
        else{
            while(A > 0 && B > 0){
                if(A >= B){
                    A = A-B;
                }
                else{
                    B = B-A;
                }
            }
        }
        
         hcf = A==0?B:A;
         
         
        
        long long num = a*b;
        
        long long lcm = 0;
        if(a == 0) lcm = 0;
        else if(b == 0) lcm = 0;
        
        else{
            lcm = num/hcf;
        }
        
        ans.push_back(lcm);
        ans.push_back(hcf);
        return ans;
    }
};