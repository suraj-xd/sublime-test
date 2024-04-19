void swap(vi &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(vi &arr, int l, int r){
    int pivot = arr[r];

    int i = l-1;

    for (int j = l; j < r; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
    
}
int quickSelect(vector<int> &a,int start,int ending,int k){
  int p = partition(a,start,ending);
  if(p==k) return a[p];
  else if(k < p){
    return quickSelect(a,start,p-1,k);
  }else{
    return quickSelect(a,p +1,ending,k);
  }
}