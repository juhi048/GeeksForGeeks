class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        int n1=m-l+1;
        int n2=r-m;
        int a[n1],b[n2];
         
        for(int i=0;i<n1;i++){
            a[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            b[i]=arr[m+1+i];
        }
        
        int i=0,j=0;
        int k=l;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                arr[k]=a[i];
                k++,i++;
            }
            else{
                arr[k]=b[j];
                k++;j++;
            }
        }
        while(i<n1){
            arr[k]=a[i];
            k++,i++;
        }
        while(j<n2){
            arr[k]=b[j];
            k++;j++;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int m=(l+r)/2;
        if(l<r){
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            
            merge(arr,l,m,r);
        }
    }
};
