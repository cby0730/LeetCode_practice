class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size(), cut = 0 ;

        while( len <= k ) k -= len;
        if (k) {
            cut = len - k ;
        } // end if
        else {
            return ;
        } // end else

        vector<int> right(nums.begin(), nums.begin()+cut) ;
        vector<int> left(nums.begin()+cut, nums.end()) ;
        left.insert( left.end(), right.begin(), right.end() );
        nums = left ;

    }
};