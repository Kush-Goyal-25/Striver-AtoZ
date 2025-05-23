#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;


class Solution{
public:
     int upperBound(vector<int> &nums, int x){
          int n = nums.size();
          int low = 0, high = n - 1;
          int ans = n;
          while(low <= high){
              int mid = (low + high) / 2;
              if(nums[mid] > x){
                  ans = mid;
                  high = mid - 1;
              }
              else{
                  low = mid + 1;
              }
          }
          return ans;
     }
};
