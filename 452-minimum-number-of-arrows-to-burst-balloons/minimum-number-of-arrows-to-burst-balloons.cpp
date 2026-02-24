// class Solution {
// public:
//     int findMinArrowShots(vector<vector<int>>& points) {
//         int n=points.size();
//         sort(begin(points),begin(points));
//          vector<int> prev=points[0];
//         int cnt=1;
//         for(int i=1;i<n;i++){
//             int currSP=points[i][0];
//             int currEP=points[i][1];
//             int prevSP= prev[0];
//             int prevEP= prev[1];
//             if(currSP> prevEP){
//                 cnt++;
//                 prev=points[i];
//             }
//             else{ // overlap hcche 
//                 prev[0]=max(prevSP,currSP);
//                 prev[1]= min(currEP,prevEP);
//             }
//         }
//         return cnt;
        
//     }
// };


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
      int n=points.size();
      sort(points.begin(),points.end());
      vector<int> prev=points[0];
      int cnt=1;
      for(int i=1;i<n;i++){
        int currstart=points[i][0];
        int currend=points[i][1];
        int prevstart=prev[0];
        int prevend=prev[1];
        
        if(currstart>prevend){
            cnt++;
            prev=points[i]; 
        }
        else {
            prev[0]=max(prevstart,currstart);
            prev[1]=min(prevend,currend);
        }
      }  
      return cnt;
    }
};