class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=nums[i];
            sum.push_back(count);
        }
        return sum;
    }
};