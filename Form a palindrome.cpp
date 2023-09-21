class Solution{
  public:
    int countMin(string str){
        //complete the function here
        string s1 = str;
        string s2 = str;
        int n = s1.length();
        int m = s2.length();
        reverse(s2.begin(),s2.end());
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0) dp[i][j]=0;
                else{
                    if(s1[i-1]==s2[j-1]) dp[i][j]=1+ dp[i-1][j-1];
                    else dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int lcs=dp[n][m];
        return n-lcs;
    }
};
