class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int left = 0;
        int mid = 0;
        int right = n-1;
        while(mid<=right){
            if(a[mid]==0){
                int temp=a[mid];
                a[mid]=a[left];
                a[left]=temp;
                left++;
                mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else if(a[mid]==2){
                int temp=a[mid];
                a[mid]=a[right];
                a[right]=temp;
                right--;
            }
            
        }
        
    }
    
};
