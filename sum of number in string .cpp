class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	// Your code here
    	int n=str.length();
    	int sum=0;
    	int num=0;
    	for(int i=0;i<n;i++){
    	    if(str[i]>='0' && str[i]<='9'){
    	        num=num*10 + (str[i]-'0');
    	    }
    	    else{
    	        sum=sum+num;
    	        num=0;
    	    }
    	}
    	return num + sum;
    }
};
