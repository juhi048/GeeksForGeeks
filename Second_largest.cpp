class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {

        int max1 = 0;
        int max2 = -1;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i] > max2 && arr[i] < max1) {
                max2 = arr[i];
            }
        }
        
        return (max2 == 0 ? -1 : max2);

	    // code here
	   // sort(arr,arr+n);
	   // return arr[n-2];
	}
};
