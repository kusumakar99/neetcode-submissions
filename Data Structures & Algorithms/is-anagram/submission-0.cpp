class Solution {
public:
    int strlen(string s) {
        int i=0;
        while (s[i++] != '\0');

        return i-1;
    }

    bool isAnagram(string s, string t) {
        int i, counter[256] = {0};
        int sl = strlen(s);
        int tl = strlen(t);

        if (sl != tl)
            return false;
    
        for(i=0; i<sl; i++) {
            counter[s[i]]++;
        }
        for(i=0; i<tl; i++) {
            counter[t[i]]--;
        }

        for(i=0; i<256; i++) {
            if (counter[i] > 0)
                return false;
        }

        return true;

    }
};
