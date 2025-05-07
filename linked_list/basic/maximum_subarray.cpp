#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

class Solution {
public:
     int maxSubArray(vector<int>& nums) {
          int res = nums[0];
          int total = 0;

          for(int n: nums){
               if(total<0){
                    total=0;
               }
               total+=n;
               res= max(res,total);
          }
          return res;
     }
};
