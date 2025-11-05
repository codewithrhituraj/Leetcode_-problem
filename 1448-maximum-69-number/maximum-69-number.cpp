class Solution {
public:
    int maximum69Number (int num) {
    int place=0;
    int placeval=-1;
    int temp=num;
    while(temp!=0){
        int last=temp%10;
        if(last==6){
            placeval=place;
        }
        temp=temp/10;


        place++;
    }
    if(placeval==-1) return num;
    else num=num+3*pow(10,placeval);
    return num;
        
    }
};