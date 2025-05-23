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
     int searchInsert(vector<int>& nums, int target) {
          int n = nums.size();
          int low = 0, high = n - 1;
          while (low <= high) {
               int mid = (low + high) / 2;
               if (nums[mid] == target)
                    return mid;
               else if (nums[mid] > target)
                    high = mid - 1;
               else
                    low = mid + 1;
          }
          return low;
     }
};
