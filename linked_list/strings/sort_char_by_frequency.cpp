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
     string frequencySort(string s) {
          unordered_map<char, int> freqMap;
          for (char ch : s) {
               freqMap[ch]++;
          }

          vector<pair<char, int>> freqVector(freqMap.begin(), freqMap.end());

          sort(freqVector.begin(), freqVector.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
               return b.second < a.second;
          });

          string result;
          for (auto& p : freqVector) {
               result += string(p.second, p.first);
          }

          return result;
     }
};
