class solution{
  public:
vector <int> subarraySum(vector <int>s sum,int n , long long s){
   long long sum;
   int i=0,j=0;
   while(i<n){
       sum+=arr[i];
       if(sum>s){
           while(j<i and sum>s){
               sum-=arr[j];
               j++;
           }
      if(sum==s){
          return {j+1,i+1};
      }
      else{
         i++;
      }
    }
  return {-1};
 }
};   

