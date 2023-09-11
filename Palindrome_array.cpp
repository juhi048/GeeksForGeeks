class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    int reverse=0 , last ,element;
    	    element=a[i];
    	    while(element>0){
    	        last = element%10;
    	        reverse=reverse*10+last;
    	        element=element/10;
    	    }
    	    if(reverse!=a[i]){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};
