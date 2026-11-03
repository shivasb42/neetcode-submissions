class Solution {
public:
    int maxArea(vector<int>& heights) {

        int l=0;
        int r=heights.size()-1;
        int max_area=INT_MIN;


        while(l<r){

            int arr=(r-l)*(min(heights[l],heights[r]));

            max_area=max(arr,max_area);

            if(heights[l]<heights[r]){
                l++;
            }

            else{
                r--;
            }



        }

        return max_area;
        
    }
};
