class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int maxlen=0;
        stack <int> st;
        st.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            st.push(i);
            else{
                st.pop();
                if(!st.empty()){
                    maxlen=max(maxlen,i-st.top());
                }
                else{
                    st.push(i);
                }
            }
        }
        return maxlen;
    }
};
