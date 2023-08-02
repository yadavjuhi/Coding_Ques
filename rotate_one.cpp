#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    vector<int>v;
    int temp=arr[0];
    for (int i = 0; i < n; i++) {
      arr[i] = arr[i + 1];
    }
    arr[n-1]=temp;
    v=arr;
    return v;
}


// rotate the array by one place
// coding ninja