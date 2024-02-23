void selectionSort(int A[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[minIndex]){
                minIndex=j;
            }
        }
        swap(A[i],A[minIndex]);
    }
}
