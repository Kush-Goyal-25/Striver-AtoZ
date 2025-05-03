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
     int longestConsecutive(vector<int>& nums) {
          sort(nums.begin(),nums.end());

          int n = nums.size();
          int count = 1;
          int maxcount = 1;

          if(n==0){
               return 0;
          }

          for (int i = 1; i < n; i++) {
               if(nums[i]==nums[i-1]){
                    continue;
               }

               if(nums[i]==nums[i-1]+1){
                    count++;
                    maxcount = max(count,maxcount);
               }
               else{
                    count = 1;
               }
          }
          return maxcount;
     }
};
