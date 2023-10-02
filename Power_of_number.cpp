class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
      //Your code here
      int MOD = 1e9+7;
        if(N==0) return 0;
        if(R==0) return 1;
        long long ans=power(N,(R)/2);
        if(R%2==0){
            return (ans%MOD * ans%MOD)%MOD;
        }
        else{
            return (ans%MOD*ans%MOD*N%MOD)%MOD;
        }
    }
};
