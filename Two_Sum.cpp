/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0 ;
        int j = 0 ;
        int now = 0 ;
        int temp = 0 ;
        vector<int> result ;
        for ( i  = 0 ; i < nums.size() ; i ++ ) {
            now = nums.at(i) ;
            for ( j  = i + 1 ; j < nums.size() ; j ++) {
                temp = now + nums.at(j) ;
                //printf("%d\t%dt\n", now, nums.at(j)) ;
                if ( temp == target ) {
                    result.push_back(i) ;
                    result.push_back(j) ; 
                } //end if 
            } // end inner for 
        } // end outer for 
       return result  ;
    }
};
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v = nums;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==target){
                nums.push_back(nums[i]);
                nums.push_back(nums[j]);
                break;
            }
            else if(sum>target) {
                j--;
            }
            else{
                i++;
            }
        }
        for(int i=0;i<nums.size()-2;i++){
            if(nums[nums.size()-2]==v[i] || nums[nums.size()-1]==v[i]){
                v.push_back(i);
            }
        }
        v.erase(next(v.begin(), 0),next(v.begin(), v.size()-2)); //erases all elements from 0 to (size of array)-2
        return v;
    }
};