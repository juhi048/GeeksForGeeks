class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>output;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            output.push_back(arr[i]);
	        }
	    }
	    return output;
	}
};
