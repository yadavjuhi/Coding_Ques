#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 

{
  int n;
  
  cin>>n;
   int arr[n];
   
   vector<int>v;
   
   
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   int k=0;
   while(k<n){
     v.push_back(arr[k]);
     int count=1;
     for(int j=0;j<n;j++){
       if(arr[k]==arr[j] && k!=j){
         count++;
         continue;
         
       }
      
     }
     k=k+count;
     
   }
   
   for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
   }
   
   
    return 0;
}

// Duplicates Brute force