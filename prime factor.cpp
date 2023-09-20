class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int>ans;
	    int prime=0;
	    for(int i=2;i*i<=N;i++){
	        while(N%i==0){
	            if(i!=prime){
	                ans.push_back(i);
	            }
	            N/=i;
	            prime=i;
	        }
	    }
	    if(N>1){
	        ans.push_back(N);
	        return ans;
	    }
	}
};
