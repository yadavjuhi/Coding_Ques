#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int k;
    cin>>k;
  
    for (int i = 0; i < k; i++) {
    int temp=arr[0];
    for(int j=0;j<n;j++){
        arr[j]=arr[j+1];
        if(j==n-1)
        arr[n-1]=temp;
    }
        
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

// left rotate by k place
// coding ninja