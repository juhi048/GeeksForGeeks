class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int n=r+1;
        sort(arr,arr+n);
        for(int i=l;i<=r;i++){
            if(k==i+1){
                return arr[i];
            }
        }
    }
};
