class Solution {
public:
    int countCollisions(string directions) {
        int n= directions.size();
        int i=0;
        while(i<n and directions[i]=='L') i++;
        int j=n-1;
        while(j>=0 and directions[j]=='R') j--;
        int cnt=0;
        while(i<=j){
            if(directions[i]!='S') cnt++;
            i++;
        }
        return cnt;
    }
};