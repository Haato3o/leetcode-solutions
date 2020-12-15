#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        vector<int> negatives;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
                break;
            else
                negatives.push_back(nums[i] * nums[i]);
        }

        int i = negatives.size();

        while (i < nums.size()) 
        {
            int n = nums[i] * nums[i];
            
            if (negatives.size() == 0 || n < negatives.back()) 
            {
                result.push_back(n);
                i++;
            } else 
            {
                result.push_back(negatives.back());
                negatives.pop_back();
            }
        }
        
        while (negatives.size() > 0) 
        {
            result.push_back(negatives.back());
            negatives.pop_back();
        }

        return result;
    }
};