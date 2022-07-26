class Solution {
public:
    // kadanaes alogoritm for subarray problems
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
          if(max<sum){max=sum;}
          if(sum<0){sum=0;} 
        }
        return max;
    }
};