class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum=0,leftsum=0;
      for(int i=0;i<nums.size();i++){
          sum+=nums[i];
      }
        for(int i=0;i<nums.size();i++){
            if(sum-leftsum-nums[i]==leftsum)
            return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};