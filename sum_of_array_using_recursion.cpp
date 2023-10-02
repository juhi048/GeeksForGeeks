class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    if(n==0){
	        return 0;
	    }
	    else{
	        return (sum(arr,n-1)+arr[n-1]);
	    }
	}
};
