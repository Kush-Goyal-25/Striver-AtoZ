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
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=1;
        vector<int> arr(nums.size());

        for(int num: nums){
            if(num>=0){
                arr[i]=num;
                i+=2;
            }
            else{
                arr[j]=num;
                j+=2;
            }
        }

        return arr;
    }
};
