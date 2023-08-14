// leetcode

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxc=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxc = max(maxc, count); 
            }
            // else if(nums[i]==0){
            //     if(maxc<count){
            //         maxc=count;
                
            //     }
            //     count=0;
                
            // }
            else{
                count=0;
            }
        }
        return maxc;
        
    }
};