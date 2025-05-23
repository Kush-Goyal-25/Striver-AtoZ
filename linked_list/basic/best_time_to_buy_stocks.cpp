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
     int maxProfit(vector<int>& prices) {
          int min = INT_MAX;
          int max = 0;

          for (int i=0;i<prices.size();i++){
               if (prices[i] < min){
                    min = prices[i];
               }
               else if (prices[i] - min > max){
                    max = prices[i] - min;
               }
          }
          return max;
     }
};
