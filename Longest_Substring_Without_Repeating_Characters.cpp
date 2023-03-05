class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int str_size = s.size(), ans = 0 ;
        int i = 0 ;
        vector<char> LS ; 

        if ( str_size == 0 ) return 0 ;

        for ( i = 0 ; i < str_size ; i ++ ) { // using sliding window

            if (find(LS.begin(), LS.end(), s[i]) != LS.end()) {
                while(LS[0] != s[i]){
                    LS.erase(LS.begin()) ;
                } // while

                LS.erase(LS.begin()) ;
            }
            LS.push_back(s[i]) ;

            if (ans < LS.size()) ans = LS.size() ; 

        } // for 

        return ans ;
    }
};