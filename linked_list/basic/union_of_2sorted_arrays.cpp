#include <vector>
using namespace std;
#include <set>


class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums;
        nums.insert(nums.end(), nums1.begin(), nums1.end());
        nums.insert(nums.end(), nums2.begin(), nums2.end());

        set<int> unique_set(nums.begin(), nums.end());

        vector<int> result(unique_set.begin(), unique_set.end());
        return result;

    }
};
