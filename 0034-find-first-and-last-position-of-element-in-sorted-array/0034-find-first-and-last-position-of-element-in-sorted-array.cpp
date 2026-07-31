class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> vtr = {-1, -1};

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == target){

                if(vtr[0] == -1){
                    vtr[0] = i;
                }

                vtr[1] = i;
            }
        }

        return vtr;
    }
};