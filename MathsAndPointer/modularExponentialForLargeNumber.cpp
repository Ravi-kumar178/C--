	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long ans = 1;
		    
		    while(n > 0){
		        if(n&1){
		            ans = (ans*x)%M;
		        }
		        x = (x*x)%M;
		        n >>= 1;
		    }
		    return ans;
		}