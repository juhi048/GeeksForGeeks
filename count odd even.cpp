class Solution{
    public:
    void countOddEven(int arr[], int sizeof_array)
    {  
        // your code here
        int odd=0,even=0;
        for(int i=0;i<sizeof_array;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        cout<<odd<<" "<<even<<endl;
    }
};
