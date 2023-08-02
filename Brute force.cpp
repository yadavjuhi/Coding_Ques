#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
  int min=INT_MAX;
  int index;
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
      index=i;
    }
  }
  // cout<<index;
  
  // for(int i=0;i<index;i++){
  //   arr[n-i-1]=arr[i];
  //   arr[i]=arr[i+1];
  // }
 for(int i=0;i<index;i++){
     int temp=arr[0];
   for(int j=0;j<n;j++){
     arr[j]=arr[j+1];
     if(j==n-1)
     arr[j]=temp;
   }
 }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}

// Rotation count
