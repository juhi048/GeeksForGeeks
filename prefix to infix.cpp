class Solution {
  public:
    bool isOperand(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        return 1;
        else return 0;
    }
  
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string>st;
        for(int i=pre_exp.size()-1; i>=0; i--){
            if(isOperand(pre_exp[i])){
                st.push(string(1, pre_exp[i]));
            }else{
                string A=st.top();
                st.pop();
                string B=st.top();
                st.pop();
                st.push("("+A+pre_exp[i]+B+")");
            }
        }
        return st.top();
    }
};
