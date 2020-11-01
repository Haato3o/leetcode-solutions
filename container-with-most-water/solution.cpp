#include <vector>
#include <algorithm>

using namespace std;
class Solution 
{
public:
    int maxArea(vector<int>& height) 
    {
        int maximum = 0;
        int i = 0;
        int j = height.size() - 1;
        while (i != j) 
        {
            int left = height[i];
            int right = height[j];
            int vol = (j - i) * min(left, right);
            maximum = max(maximum, vol);

            if (left > right) 
            {
                j--;
            } else 
            {
                i++;
            }
        }
        return maximum;
    }
};