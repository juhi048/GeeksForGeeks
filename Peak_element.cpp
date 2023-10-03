class Solution
{
    public:
                        //   O(logN) approach
    int peakElement(int arr[], int n)
    {
       // Your code here
       int low=0,high=n-1;
       while(low<high){
           int mid = (low+high)/2;
           if(arr[mid]>=arr[mid+1]){
               high=mid;
           }
           else{
               low=mid+1;
           }
       }
       return high;
       
    //                      O(n) approach
    //   if(n==1) return 0;
    //   if(arr[n-1]>arr[n-2]) return n-1;
    //   for(int i=1;i<n-1;i++){
    //       if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) return i;
    //   }
    }
};
