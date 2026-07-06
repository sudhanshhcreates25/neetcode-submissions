class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lftmax(n);
        vector<int>rhtmax(n);
        lftmax[0]=height[0];
        rhtmax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            lftmax[i]=max(lftmax[i-1],height[i]);

        }
        for(int i=n-2;i>=0;i--){
            rhtmax[i]=max(rhtmax[i+1],height[i]);
        }
        int water=0;
        for(int i=0;i<n;i++){
            water+=min(lftmax[i],rhtmax[i])-height[i];
        }
        return water;
    }
};
