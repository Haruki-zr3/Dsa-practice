class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<long long, int> psm;
        long long sum = 0;
        int cnt = 0;
        psm[0] = 1; 
        for(int i = 0; i < a.size(); i++) {
            sum += a[i];
            long long rem = sum - k;
            if(psm.find(rem) != psm.end()) {
                cnt += psm[rem];  
            }
            psm[sum]++;
        }
        return cnt;
    }
};
