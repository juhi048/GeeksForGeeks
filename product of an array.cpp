long long int product(int ar[], int n, long long int mod)
 {
     
     //code here
     long long int ans = 1;
        for(int i=0;i<n;i++){
            ans=(ans*ar[i])%mod;
        }
        return ans;
     
 }
