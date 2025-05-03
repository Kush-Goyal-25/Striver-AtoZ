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
     vector<int> leaders(vector<int>& nums) {
          vector<int> ans;
          int n = nums.size();
          int max = nums[n-1];

          for(int i=n-1; i>=0; i--){
               if(nums[i] >= max){
                   ans.push_back(nums[i]);
                   max = nums[i];
               }

          }
          reverse(ans.begin(), ans.end());
          return ans;
     }
};
