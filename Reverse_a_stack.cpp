class Solution{
public:

    void insertAtBottom(stack<int> &St,int ele){
        if(St.empty()){
            St.push(ele);
            return;
        }
        int topele=St.top();
        St.pop();
        insertAtBottom(St,ele);
        St.push(topele);
        
    }
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int ele=St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St,ele);
    }
};
