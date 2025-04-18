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
     int missingNumber(vector<int>& nums) {
          int n = nums.size();
          sort(nums.begin(), nums.end());

          for (int i = 0; i < n; i++) {
               if(nums[i]!=i){
                    return i;
               }
          }
          return n;
     }
};
