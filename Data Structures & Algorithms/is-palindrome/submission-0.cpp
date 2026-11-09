class Solution {
public:
    bool isPalindrome(string s) {
        //step1: remove non alphanumeric letters from original string
        //step2: if the str and reverse string are same => palendrome

        string t;
        int i=0, k=0, j=0, c;
        for (i=0; (c = s[i]) !='\0'; i++) {
            if (((c>='0') && (c<='9')) || ((c>='A') && (c<='Z')) || ((c>='a') && (c<='z'))) {
                t.push_back(c);
                k++;
            }
        }

        for(i=0,j=k-1;i<j;i++,j--) {
            if(std::tolower(t[i]) != std::tolower(t[j]))
                return false;
        }
        return true;
    }
};
