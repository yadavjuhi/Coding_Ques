//  leetcode

// Using Two pinters
 

 int removeDuplicates(vector<int>& arr) {
       int i=0;
       int n=arr.size();
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return i+1;
        
    }