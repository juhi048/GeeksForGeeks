//code here 
        vector<long long int>ans;
        long long int pdt=1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
              pdt*=nums[i];
            else{
                cnt++;
            }
        }
        for(int i=0;i<n;i++){
            long long int temp=pdt;
            if(nums[i]!=0){
                if(cnt)
                  ans.push_back(0);
                else{
                    temp/=nums[i];
                    ans.push_back(temp);
                }
            }else if(nums[i]==0 and cnt >1){
               ans.push_back(0);
            }
             else 
              ans.push_back(pdt);
            
        }
        return ans;
    }
