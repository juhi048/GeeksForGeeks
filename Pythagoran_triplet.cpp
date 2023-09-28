class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    for(int i=0;i<n;i++)arr[i]*=arr[i];
        sort(arr,arr+n);
        for(int i=n-1;i>=2;i--)
        {
            int l=0,h=i-1;
            while(l<h)
            {
                if((arr[h]+arr[l]) < arr[i] )
                {
                    l++;
                }
                else if(( arr[h]+arr[l])  > arr[i])h--;
                else return true;
            }
        }
        return false;
    }
	
};
