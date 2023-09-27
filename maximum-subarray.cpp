class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN; //maximum sum so far 
        int new_sum = 0; //current sum of subarray

        for(int i=0;i<nums.size();i++){ 
            new_sum += nums[i];

            if(new_sum>max_sum){
                max_sum = new_sum;
            }

            //if sum is less than 0 ,no need to proceed further as sum of 
            // negative will give negative only
            if(new_sum<0){ 
                new_sum=0;
            }

        }
        return max_sum; //returning maximum subarray sum
    }
};