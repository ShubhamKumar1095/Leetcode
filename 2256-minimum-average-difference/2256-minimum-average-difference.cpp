class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
       long long sum=0, curr=0;
        for(auto i:nums){
            sum+=i;
        }
        int c=0;
        int min=INT_MAX;
      for(int i=0; i<n; i++){
            curr+=nums[i];
            int avg1 = curr/(i+1);
            if(i==n-1){
                if(avg1<min)
                    return n-1;
                else
                    break;
            }
            int avg2=(sum-curr)/(n-i-1);
            if(abs(avg1-avg2)<min){
                min= abs(avg1-avg2);
                c= i;
            }
        }
        return c;
    }
};

