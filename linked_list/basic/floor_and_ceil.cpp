#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;


class Solution {
public:
     vector<int> getFloorAndCeil(vector<int> nums, int x) {
          vector<int> ans(2, -1);
          sort(nums.begin(), nums.end());
          int n = nums.size();
          for (int i = 0; i < n; i++) {
               if (nums[i] <= x) {
                    ans[0] = nums[i];
               }
               if (nums[i] >= x) {
                    ans[1] = nums[i];
                    break;
               }
          }
          return ans;
     }
};
