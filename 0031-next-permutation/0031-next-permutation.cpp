class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int first_ind=-1;
        for(int i=nums.size()-2; i>=0 ; i--){
            if(nums[i]<nums[i+1]){
                first_ind=i;
                break;
            }
        }
        if(first_ind==-1){
            reverse(nums.begin(), nums.end());
            return ;
        }
        int sec_ind=-1;
        for (int i = nums.size() - 1; i > first_ind; i--){
            if(nums[i]>nums[first_ind]){
                sec_ind=i;
                break;
            }
        }

        swap(nums[first_ind], nums[sec_ind]);
        reverse(nums.begin() + first_ind + 1, nums.end());
        


        

    }
};