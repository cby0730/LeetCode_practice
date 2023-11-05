class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0 ;
        int len = nums.size();

        for (int i = 1 ; i < len ; i ++) {

            nums[index] != nums[i] ? nums[++index] = nums[i] : nums[i] = 0 ;

        } // end for

        return ++index ;
    }
};