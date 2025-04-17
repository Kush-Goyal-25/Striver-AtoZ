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
    int fib(int n) {
        if(n<=1)return n;
        return fib(n-1)+fib(n-2);
    }
};
