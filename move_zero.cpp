vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
   vector<int>temp;
    int count=0;
    for (int i = 0; i < n; i++) {
      if (a[i] != 0) {

        temp.push_back(a[i]);
        count++;
      }
    }
    a.clear();
    for (int i=0;i<n;i++) {
      if (count>0) {
          a.push_back(temp[i]);
          count--;
          
      } 
      else {
          a.push_back(0);
      }
    }
    temp.clear();
    temp=a;
    return temp;
    
}

// secod approach

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int> temp(n,0);
    for (int i = 0,j=0; i < n; i++){
      if (a[i] != 0) {
        temp[j]=a[i];
        j++;
      }
    }
    return temp;
}
