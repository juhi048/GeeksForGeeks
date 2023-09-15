class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int left = 0;
        while(arr[left]==0){
            left++;
        }
        for(int right=left+1;right<n;right++){
            if(arr[right]==0){
                int temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
                left++;
            }
        }
    }
};
