int convertFive(int n) {
    // Your code here
    string m = to_string(n);
    int s = m.size();
    for(int i=0;i<s;i++){
        if(m[i]=='0'){
            m[i]='5';
        }
    }
    return stoi(m);
}
