class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int count=0;
            for(int j=0;j<n;j++){
                if(temp==nums[j]){
                    count++;
                }
            }
            if(count==1)
            return temp;
        }
        return -1;
        
    }
};