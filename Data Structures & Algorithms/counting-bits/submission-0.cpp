class Solution {
public:
    int findonescount(uint32_t n) {
        uint32_t count=0;
        while (n!=0) {
            count++;
            n = n&(n-1);
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> output(n + 1);
        for (int i=0;i<=n;i++) {
            output[i]=findonescount(i);
        }
        return output;
    }
};
