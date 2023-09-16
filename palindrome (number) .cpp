class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int rev=0;
		    int ori = n;
		    while(n>0){
		        int rem = n%10;
		        rev=rev*10 +rem;
		        n=n/10;
		    }
		    if(rev==ori){
		        return "Yes";
		    }
		    else{
		        return "No";
		    }
		    
		}
};
