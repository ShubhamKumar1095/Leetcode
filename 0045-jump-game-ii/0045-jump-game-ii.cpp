class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0,max=0,jump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
          if(i+nums[i]>max)
              max=i+nums[i];
        
        if(i==curr)
        {
            jump++;
          curr=max;  
        }
        }
        return jump;
    }
};