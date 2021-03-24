// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0, r = size - 1, n = 0, res = 0;
  while (l <= r) {
    int c = (l + r) / 2;
    if (arr[c] > value)
      r = arr[c];
    else
     l = arr[c];
    if (arr[c] == value) {
      res++;
      while ((arr[c - n] == value) || (arr[c + n] == value)) {
        if (arr[c - n] == value) {
          res++;
          n++;
        }
        if (arr[c + n] == value) {
          res++;
          n++;
        }
      }
    }
  }
    //printf(res);
    return res;
}
