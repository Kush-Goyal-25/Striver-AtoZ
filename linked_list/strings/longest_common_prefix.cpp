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
     string longestCommonPrefix(vector<string>& strs) {
          if (strs.empty()) return "";

          sort(strs.begin(), strs.end());

          string first = strs[0];
          string last = strs.back();

          int minLength = min(first.length(), last.length());
          int i = 0;

          while (i < minLength && first[i] == last[i]) {
               i++;
          }

          return first.substr(0, i);
     }
};
