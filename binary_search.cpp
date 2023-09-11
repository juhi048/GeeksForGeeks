class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start = 0 , end = n-1;
        for(int i=0;i<n;i++){
            int mid = (start + end)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};
