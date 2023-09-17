string merge (string S1, string S2)
{
    // your code here
    int i=0;
    int j=0;
    string res="";
    while(i<S1.length() && j<S2.length()){
        res+=S1[i++];
        res+=S2[j++];
    }
    while(j<S2.length()){
        res+=S2[j++];
    }
    while(i<S1.length()){
        res+=S1[i++];
    }
    return res;
}
