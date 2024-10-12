 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();  // row
        int n = matrix[0].size(); // column

        int dir  = 0;

        /*
            dir = 0 : left to right
            dir = 1 : top to bottom 
            dir = 2 : right to left
            dir = 3 : bottom to top 
        */
        int top =0;
        int bottom = m-1;
        int left =0;
        int  right = n-1;


        vector<int> result;

        while(top<=bottom && left<=right){
            if(dir==0){
                // left to right
                // constant : row
                for(int i = left ; i<=right;i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }

            if(dir == 1){
                // top to bottom
                // constant : column
                for(int i = top;i<=bottom;i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }

            if(dir == 2){
                // right to left
                // constant : row
                for(int i = right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(dir == 3){
                // down to top
                // constant : col
                for(int i = bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }

            dir++;

            if(dir==4){
                dir = 0;
            }
            
        }
        return result;
    }