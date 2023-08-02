////Coding ninja

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int isSorted(int n, vector<int> arr) {
    // Write your code here.


    
     int count=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                count++;
            }
        }
        if(count==n)
        return 1;
        else
        return 0;
    
}


int main(){
    int n;


}