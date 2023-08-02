#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() 
{
  // pair<int,int>p[]={{1,2},{3,4}};
  // cout<<p[0].first;
  
  
  // vector
  vector<int>v(5,100);
  for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;
   for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
  }
  
  vector<int>v1;
  v1.push_back(1);
   v1.push_back(2);
    v1.push_back(3);
     v1.push_back(4);
      v1.push_back(5);
       v1.push_back(6);
       
        v1.push_back(7);
  // // for(auto it:v1){
  //     int p= v1.erase(v1.begin()+1);
  //     console.logp;
  // //         for(auto it:v1){
  // //           cout<<it;
        
  // // }
  
    return 0;
}