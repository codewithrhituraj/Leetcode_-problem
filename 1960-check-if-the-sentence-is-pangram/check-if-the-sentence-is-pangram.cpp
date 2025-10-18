class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        vector<int> arr(26,0);
        for(auto& ch: sentence){
            int index=ch-'a';
            arr[index]++;
        }
        for(auto& v: arr){
            if(v==0) return false;
        }
        return true;
    }
};