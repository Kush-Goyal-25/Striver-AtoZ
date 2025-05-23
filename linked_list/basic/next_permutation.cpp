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
     void nextPermutation(vector<int>& nums) {
          int i = nums.size()-1;
          while(i>0 && nums[i-1]>=nums[i]){
               i--;
          }

          if(i==0){
               reverse(nums.begin(),nums.end());
               return;
          }

          int j = nums.size()-1;
          while(nums[j]<=nums[i-1]){
               j--;
          }

          swap(nums[i-1],nums[j]);
          reverse(nums.begin()+i,nums.end());

     }
};
