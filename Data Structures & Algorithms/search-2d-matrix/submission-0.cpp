class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m= matrix[0].size();
        for(int i=0;i<n;i++){
            int st=0;
            int end=m-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(target<matrix[i][mid]){
                    end=mid-1;
                }
                else if(target>matrix[i][mid]){
                    st=mid+1;
                }
                else{
                    return true;
                }
            }
        }
        return false;
    }
};
