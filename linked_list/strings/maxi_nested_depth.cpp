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
     int maxDepth(string s) {
          int count = 0;
          int result = 0;

          for (char ch : s) {
               if (ch == '(') {
                    count++;
                    result = max(count, result);
               } else if (ch == ')') {
                    count--;
               }
          }

          return result;
     }
};
