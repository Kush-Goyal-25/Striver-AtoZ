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
     string removeOuterParentheses(string s) {
          string result;
          int depth = 0;

          for (char ch : s) {
               if (ch == '(') {
                    depth++;
                    if (depth > 1) {
                         result += ch;
                    }
               } else if (ch == ')') {
                    depth--;
                    if (depth >= 1) {
                         result += ch;
                    }
               }
          }

          return result;
     }
};
