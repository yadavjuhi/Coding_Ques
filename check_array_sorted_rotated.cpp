/*
Check array sorted and rotated

Leetcode

*/

class Solution {
public:
    bool check(vector<int>& arr) {
       int n= arr.size();
       int count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
            count++;

        }
        if(arr[n-1]>arr[0])
        count++;
        if(count<=1)
        return true;
        else 
        return false;
       
    }
    cout<<"hbjnkl";
};