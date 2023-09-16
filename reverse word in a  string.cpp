class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack <string> st;
        string s;
        for(int i=0 ;i<S.size();i++){
            if(S[i]!='.'){
                s+=S[i];
            }
            if(S[i]=='.'){
                st.push(s);
                s="";
            }
        }
        st.push(s);
        string res;
        while(!st.empty()){
            string str=st.top();
            st.pop();
            res+=str+".";
        }
        res.pop_back();
        return res;
    } 
};
