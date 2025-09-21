class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        int tne= n*m;
        int minr= 0;
        int maxr=n-1;
        int minc=0;
        int maxc=m-1;
        int count=0;
        vector<int> v;
        while(minr<=maxr and minc<=maxc){
            //right
            for(int j=minc;j<=maxc and count<tne;j++ ){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;

            // down
            for(int i=minr;i<=maxr and count<tne ;i++){
                v.push_back(matrix[i][maxc]);
                 count++;
            }
            maxc--;
            // left

            for(int j=maxc;j>=minc and count<tne ;j--){
                v.push_back(matrix[maxr][j]);
                 count++;
            }
            maxr--;
            //up
            for(int i=maxr;i>=minr and count<tne ;i--){ // it should be less not up
                v.push_back(matrix[i][minc]);
                 count++;
            }
            minc++;
        }
        return v;

    }
};