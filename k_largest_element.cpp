class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr,arr+n,greater<int>());
	    vector<int> large;
	    
	    for(int i=0;i<k;i++){
	        large.push_back(arr[i]);
	    }
	    return large;
	}

};
