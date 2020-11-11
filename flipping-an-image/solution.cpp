#include <vector>

using namespace std;

class Solution 
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) 
    {
        for (vector<int>& row : A) 
        {
            for (int i = 0; i < ceil((float)row.size() / (float)2); i++) 
            {
                
                if (i != row.size() - 1 - i) 
                {
                    row[i] ^= row[row.size() - 1 - i];
                    row[row.size() - 1 - i] ^= row[i];
                    row[i] ^= row[row.size() - 1 - i];
                
                    row[row.size() - 1 - i] ^= 1;
                }
                row[i] ^= 1;
            }
            
        }
        
        return A;
    }
};