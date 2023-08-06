int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.

    int i;
    int index=-1;
    
    for (i = 0; i < n; i++) {
      if (arr[i] == num) {
          index=i;
          break;
      }
    }
     if (index == -1) {
        return -1;
     } else {
         return index;
     }
}
