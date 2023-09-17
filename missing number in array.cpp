class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=array[i];
        }
        int digit=(n*(n+1))/2;
        int value = digit - sum;
        return value;
    }
};
