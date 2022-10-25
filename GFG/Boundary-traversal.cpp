class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        int r = n;
        int c = m;
        vector<int>v;
        if(r==1){
            for(int i=0;i<c;i++){
                v.push_back(matrix[0][i]);
            }
        }
        else if(c==1){
            for(int i=0;i<r;i++){
                v.push_back(matrix[i][0]);
            }
        }
        else{
            for(int i =0;i<c;i++){
                v.push_back(matrix[0][i]);
            }
            for(int i =1;i<r;i++){
                v.push_back(matrix[i][c-1]);
            }
            for(int i =c-2;i>=0;i--){
                v.push_back(matrix[r-1][i]);
            }
            for(int i =r-2;i>=1;i--){
                v.push_back(matrix[i][0]);
            }
            
        }
        return v;
    }
};
