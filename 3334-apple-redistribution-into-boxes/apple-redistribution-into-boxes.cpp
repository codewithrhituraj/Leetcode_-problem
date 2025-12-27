class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(begin(capacity), end(capacity), greater<int>()); //H.W : Counting Sort

        int totalApple = accumulate(begin(apple), end(apple), 0);

        int count = 0;
        int i = 0;
        while(totalApple > 0) {
            totalApple -= capacity[i];
            count++;
            i++;
        }

        return count; //total number of boxes used
    }
};