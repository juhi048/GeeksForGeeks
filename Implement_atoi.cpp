class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int start=0;
        int ans=0;
        if(str[0]=='-'){
            start=1;
        }
        for(int i=start;i<str.length();i++){
            if('0'<=str[i] && str[i]<='9'){
                ans=ans*10+(str[i]-'0');
            }
            else{
                return -1;
            }
        }
        if(start==1){
            return -ans;
        }
        else{
            return ans;
        }
    }
};
