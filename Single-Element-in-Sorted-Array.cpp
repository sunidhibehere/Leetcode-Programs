class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            res = res^nums[i]; 
            // ^ represents XOR operator
            //The result of XOR is 1 if the two bits are different. 
        }
        return res;
    }
};
