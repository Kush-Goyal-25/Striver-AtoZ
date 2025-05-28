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
     string largestOddNumber(string num) {
          for (int i = num.length() - 1; i >= 0; --i) {
               char c = num[i];
               if ((c - '0') % 2 == 1) {
                    return num.substr(0, i + 1);
               }
          }
          return "";
     }
};
