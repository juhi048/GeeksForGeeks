string transform(string s)
{
    // code here
    int n=s.length();
    
    if(islower(s[0]))
     
     s[0]=toupper(s[0]);
     
     
     for(int i=2;i<n;i++)
     {
         if(s[i-1]==' ')
         {
             s[i]=toupper(s[i]);
         }
     }
     return s;
}
