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
     bool rotateString(string s, string goal) {
          return (s.length()==goal.length() && (s+s).contains(goal));
     }
};
