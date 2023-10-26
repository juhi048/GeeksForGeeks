class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int prec (char ch){
        if (ch == '^'){
            return 2;
        }
        else if (ch == '/' || ch == '*'){
            return 1;
        }
        else if(ch == '+' || ch == '-'){
            return 0;
        }
        else{
            return -1;
        }
    }
    string infixToPostfix(string s) {
        // Your code here
        string res;
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                res+=s[i];
            }
            else if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
            }
            else{
                while(!st.empty() && prec(st.top())>=prec(s[i])){
                    res+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        } 
        return res;
    }
};
