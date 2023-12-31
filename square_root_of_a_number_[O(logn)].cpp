lass Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long s=0, e=x;
        
        long long int ans=0;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            if(mid*mid==x)return mid;
            else if(mid*mid<x){
                ans = mid;
                s = mid+1;
            }else e = mid-1;
        }
        
        return ans;
    }
};
