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
     bool isAnagram(string s, string t) {
          if(s.length()!=t.length()) {
               return false;
          }

          sort(s.begin(),s.end());
          sort(t.begin(),t.end());

          return s==t;
     }
};
