class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k > nums.size() ) return {};
        int n = nums.size();
        unordered_map<int,int> mpp;
        vector<int> res;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> vec(mpp.begin(), mpp.end());
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;   // sort by count descending
        });

        for (int i=0; i<k; i++){
            res.push_back(vec[i].first);
        }
        return res;
    }
};
