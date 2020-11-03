#include <string>
#include <algorithm>

using namespace std;
class Solution 
{
public:
    int maxPower(string s) 
    {
        int maximum = 0;
        int current = 0;
        char last = ' ';
        for (int i = 0; i < s.size(); i++) 
        {
            if (!(last ^ s[i])) 
            {
                current++;
            } else 
            {
                maximum = max(maximum, current);
                current = 1;
                last = s[i];
            }
        }
        return max(maximum, current);
    }
};