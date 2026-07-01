class Solution {
public:
    int maxArea(vector<int>& height) {

       int l =0, r = height.size()-1, maxWater =0;

       while(l < r){
        int width = r -l;
        int ht = min(height[l], height[r]);
        int area = width * ht;
        maxWater = max(maxWater , area);

        height[l]<height[r]? l++ : r--;
       }

       

        return maxWater;
    }
};