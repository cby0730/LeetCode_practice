class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1,  j = n - 1, sum = m + n - 1;

        while (j >= 0) {

            i >= 0 && nums1[i] >= nums2[j] ? nums1[sum--] = nums1[i--] : nums1[sum--] = nums2[j--] ;

        } // end while
    }
};