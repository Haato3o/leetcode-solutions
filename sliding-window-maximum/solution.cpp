#include <vector>
#include <map>
#include <deque>

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        map<int, int> values;
        vector<int> maxes;
        for (int i = 0; i < nums.size(); i++) {
            
            if (dq.size() < k) {
                if (values.find(nums[i]) != values.end()) {
                    values[nums[i]]++;
                } else {
                    values.insert(pair<int, int>(nums[i], 1));
                }
                dq.push_back(nums[i]);
            }
            
            if (dq.size() == k) {
                maxes.push_back(values.rbegin()->first);
                
                if (!(--values[dq.front()])) {
                    values.erase(dq.front());
                }                
                dq.pop_front();
            }
        }
        return maxes;
    }
};