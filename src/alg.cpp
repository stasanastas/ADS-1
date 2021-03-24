// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i, j, lastIndex; 
  i =size−1; 
  while (i>0) {
    lastIndex=0; 
    for (j=0; j < i; j++) 
      if( arr [ j +1] < arr [ j ]) {
        swap (& arr [ j +1] ,& arr [ j ]);
        lastIndex = j;
      } 
    i = lastIndex; 
  }
  int l=arr, r=size-1, n=0, res=0;
  while (l<=r){
    int c=(l+r)/2;
    if (arr[c]>value)
      r=arr[c];
    else l=arr[c];
    if(arr[c]==value){
      res++;
      while((arr[c-n]==value) or (arr[c+n]==value)){
        if (arr[c-n]==value){
          res++;
          n++;
        }
        if (arr[c+n]==value){
          res++;
          n++;
        }
      }
    }
    //printf(res);
    return res; // если ничего не найдено
}
