class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int num1=-1,num2=-1,sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            int ele = abs(arr[i]);
            if(arr[ele-1]<0){
                num1 = ele;
            }
            else{
            arr[ele-1] *= (-1);
            }
            sum1+=ele;
            sum2+=i+1;
        }
        num2 = (sum2 - sum1) + num1;

        return {num1,num2};
    }
};
