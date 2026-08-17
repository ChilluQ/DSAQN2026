class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        int end=1;
        while(end<nums.size()){
            if(nums[start]!=0){
                start++;
            }
            if(nums[start]==0 && nums[end]!=0 ){
                swap(nums[start], nums[end]);
                start++;
                end++; 
            }else{
                end++;
            }
        
        }
    }
};