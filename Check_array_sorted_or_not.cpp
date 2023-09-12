class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i= 0;i+1<n;i++){
            if(arr[i]>arr[i+1]){
                return 0;
            }
        }
        return 1;
    }
};
