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
     class Solution {
     public:
          vector<int> searchRange(vector<int>& nums, int target) {
               vector<int> ans(2, -1);
               int n = nums.size();
               if (n == 0) return ans;


               int low = 0, high = n - 1;
               while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (nums[mid] == target) {
                         ans[0] = mid;
                         high = mid - 1;
                    } else if (nums[mid] < target) {
                         low = mid + 1;
                    } else {
                         high = mid - 1;
                    }
               }


               low = 0, high = n - 1;
               while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (nums[mid] == target) {
                         ans[1] = mid;
                         low = mid + 1;
                    } else if (nums[mid] < target) {
                         low = mid + 1;
                    } else {
                         high = mid - 1;
                    }
               }

               return ans;
          }
     };
};
