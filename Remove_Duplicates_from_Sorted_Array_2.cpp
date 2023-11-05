class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0, counter = 0;
        for(int i = 1; i < nums.size(); i ++) {

            if ( nums[index] != nums[i]) {

                nums[++index] = nums[i] ;
                counter = 0 ;

            } // end if
            else if(counter == 0){

                nums[++index] = nums[i] ;
                counter ++ ;

            } // end else if

        } // end for

        return ++index ;
    }
};