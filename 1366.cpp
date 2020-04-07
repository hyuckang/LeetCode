class Solution {

public:
    static bool pair_asce_sort( const pair<int, char> &A, const pair<int, char> &B)
    {  
        return (A.first > B.first);
    }    
    
    string rankTeams(vector<string>& votes)
    {
        vector<pair<int, char>> vote_res;
        for(int i=65; i<91; i++) vote_res.push_back(make_pair(0, i));

        int row_sz = votes.size();
        int col_sz = votes[0].size();
        string res = "";

        for(int r=0; r<row_sz; r++)
        {
            for(int c=0; c<col_sz; c++)
            {
                vote_res[votes[r][c] - 'A'].first = vote_res[votes[r][c] - 'A'].first + col_sz - c;
            }
        }

       sort(vote_res.begin(), vote_res.end(), pair_asce_sort);    

       for(int i=0; i<col_sz; i++) res += vote_res[i].second;

       return res;
    }
};
