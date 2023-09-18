int missingNumber(int A[], int N)
{missing 
    // Your code goes here
    int totalsum=(N*(N+1))/2;
    int sum=0;
    for(int i=0;i<N-1;i++){
        sum+=A[i];
    }
    return totalsum - sum;
}
