class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people),end(people));
        int i=0;
        int n=people.size();
        int j=n-1;
        int bt=0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
                bt++;
            }
            else{
                j--;
                bt++;
            }
        }
        return bt;
        
    }
};