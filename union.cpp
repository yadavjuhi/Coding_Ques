// coding ninja
#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    set<int>temp;
    vector<int>v;
    int n1=a.size();
    int n2=b.size();
    for (int i = 0; i < n1; i++) {
      temp.insert(a[i]);
    }
    for (int i = 0; i < n2; i++) {
      temp.insert(b[i]);
    }
    for(int i:temp){
      v.push_back(i);
    }
    return v;
    }