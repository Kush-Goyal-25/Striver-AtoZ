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
     void moveZeroes(vector<int>& nums) {
          int n=nums.size();
          if(n==0 || n==1){
               return;
          }

          vector<int>arr;
          for(int i=0;i<n;i++){
               if(nums[i]!=0){
                    arr.push_back(nums[i]);
               }
          }

          while(arr.size()<n){
               arr.push_back(0);
          }

          nums=arr;
     }
};
