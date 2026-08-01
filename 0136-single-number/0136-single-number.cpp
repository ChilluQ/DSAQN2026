class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int start =0 ; 
        for(int i =0 ; i<nums.size()-1;i+=2){//5->4
            if(nums[i]!=nums[i+1]){
                return nums[i];// 11224
            }
        }
        return nums.back();
    }
};