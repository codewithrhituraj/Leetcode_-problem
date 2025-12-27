class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(begin(capacity),end(capacity));
       reverse(begin(capacity),end(capacity));
        int i=0;
        int sum_apple= accumulate(begin(apple), end(apple), 0);
        int cnt=0;
        while(sum_apple>0){
            sum_apple-=capacity[i];
            cnt++;
            i++;
        }
        return cnt;
        
    }
};