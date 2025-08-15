class Solution {
public:
    int maxArea(vector<int>& height) {
    int i=0;
    int n=height.size();
    int j=n-1;
    int water=0;
    while(i<j){
        int h=min(height[i],height[j]);
        int width=j-i;
        int area=h*width;
        // mujhe max area nikalna h on the basis of width and h 
        water=max(water,area);
        if(height[i]<height[j]) i++;
        else j--;

    }
    return water;
        
    }
};