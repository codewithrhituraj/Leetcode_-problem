class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a5=0;
        int a10=0;
        int a20=0;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5) a5++;
            else if(bills[i]==10 and a5>=1) {
                a10++;
                a5--;
            }
            else if(bills[i]==20 and a10>=1 and a5>=1){
                a20++;
                a10--;
                a5--;
            } 
            else if(bills[i]==20 and a5>=3) a5-=3;
            else return false;
        }
        return true;
    }
};