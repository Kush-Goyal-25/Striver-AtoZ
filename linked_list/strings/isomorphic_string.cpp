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
     bool isIsomorphic(string s, string t) {
          if (s.length() != t.length()) return false;

          unordered_map<char, char> charMap;
          unordered_map<char, bool> valueExists;

          for (int i = 0; i < s.length(); ++i) {
               char sChar = s[i];
               char tChar = t[i];

               if (charMap.find(sChar) == charMap.end()) {

                    if (!valueExists[tChar]) {
                         charMap[sChar] = tChar;
                         valueExists[tChar] = true;
                    } else {
                         return false;
                    }
               } else {
                    if (charMap[sChar] != tChar) {
                         return false;
                    }
               }
          }

          return true;
     }
};
