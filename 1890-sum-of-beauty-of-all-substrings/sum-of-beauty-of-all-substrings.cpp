class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;

        // Outer loop: fix start of substring
        for(int i = 0; i < n; i++) {
            vector<int> freq(26, 0); // frequency array of chars

            // Inner loop: expand substring from i to j
            for(int j = i; j < n; j++) {
                freq[s[j] - 'a']++; // include this char

                int maxFreq = INT_MIN, minFreq = INT_MAX;

                // Find max and min frequency among present chars
                for(int k = 0; k < 26; k++) {
                    if(freq[k] > 0) { // only consider present chars
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }

                ans += (maxFreq - minFreq); // add beauty of this substring
            }
        }
        return ans;
    }
};
