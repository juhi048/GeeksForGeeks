class Solution {
  public:
    bool isOperand(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='1' && ch<='9')){
            return true;
        }
        return false;
    }
    string postToInfix(string exp) {
        // Write your code here
        stack<string>st;
        for(int i=0; i<exp.size(); i++){
           if(isOperand(exp[i])){
                st.push(string(1, exp[i]));
            }else{
                string A=st.top();
                st.pop();
                string B=st.top();
                st.pop();
                st.push("("+B+exp[i]+A+")");
            }
        }
        return st.top();
    }
};
