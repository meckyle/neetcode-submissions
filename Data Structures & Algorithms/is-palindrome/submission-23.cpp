class Solution {
public:
    bool isPalindrome(string s) {

        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }

        int left = 0;
        int right = s.size() - 1;

        

        while(left < right){
                        if (!isalnum(s[left])) {
                left++;
                continue;
            }

            // skip non-alphanumeric from right
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            if(s[left] != s[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;












































        // int left = 0, right = s.size() - 1;

        // while(left < right) {
        //     // skip non-alphanumeric
        //     while(left < right && !isalnum(s[left])) left++;
        //     while(left < right && !isalnum(s[right])) right--;

        //     // compare lowercase
        //     if(tolower(s[left]) != tolower(s[right])) return false;

        //     left++;
        //     right--;
        // }

        // return true;
    }
};