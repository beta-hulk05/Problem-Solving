class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int even = 0;
        int odd = 0;
        for(int i =0; i< nums.size(); i= i+2){
            even += nums[i];
        }
        for(int i =1; i< nums.size(); i= i+2){
            odd += nums[i];
        }
        return even-odd;
    }
};