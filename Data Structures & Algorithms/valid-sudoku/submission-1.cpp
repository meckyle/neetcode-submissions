class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<char, int>mp;

        //Lets first start with the rows, go one by one in the rows, and store the values into a hash map,
        //store the frequency of occurence into the hashmap

        

        for(int i = 0; i < board.size(); i++){


            //board[i][0] // etc, etc iterate the column, and store the value into the hashmap

            for(int j = 0; j < board[i].size(); j++){
                if(isdigit(board[i][j])){
                mp[board[i][j]]++;
                }
            }


            for (const auto& pair : mp) {
                if (pair.second > 1) {
                    return false;
                    }
             }

             //j = 0;
             mp.clear();

        }

        for(int k = 0; k < board[0].size(); k++){


            for(int l = 0; l < board.size(); l++){
                if(isdigit(board[l][k])){
                mp[board[l][k]]++;
                }
            }

            for (const auto& pair: mp) {
                if(pair.second > 1){
                    return false;
                }
            }

            //l = 0
            mp.clear();
        }




    int start_Column = 0;
    int end_Column = 3;
    int start_Row = 0;
    int end_Row = 3;
    int start = 0;
    int row_Increment = 0;


        for(int m = 0; m < 9; m++){
            for(int r = start_Row; r < end_Row; r++){
                for(int c = start_Column; c < end_Column; c++){
                    if(isdigit(board[r][c])){
                    mp[board[r][c]]++;
                    }
                }                   
            }   

            for (const auto& pair: mp) {
                if(pair.second > 1){
                    return false;
                        }
                    }

            mp.clear();

                
           
           
        
        
        start = start + 3;
        if(start == 9){
            start = 0;
            row_Increment = row_Increment + 3;
        }
        start_Column = start;
        end_Column = start + 3;
        end_Row = row_Increment + 3;
        start_Row = row_Increment;

        }

        return true;
    

    }
};
