#include <bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mini=a[0];
        int max_profit=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            int cost=a[i]-mini;
            max_profit=max(max_profit,cost);
            mini=min(a[i],mini);
        }
        return max_profit;
    }
};
