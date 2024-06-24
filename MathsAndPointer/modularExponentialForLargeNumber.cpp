<<<<<<< HEAD
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
=======
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
>>>>>>> c380a4a1b8353b12a0e26e94060554e834635a5d
		}