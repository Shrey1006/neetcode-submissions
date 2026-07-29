class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int res = 0, n = position.size();
        vector<pair<int,int>> temp;
        for(int i=0; i<n; i++){
            temp.push_back({position[i], speed[i]});
        }
        sort(temp.rbegin(), temp.rend());
        vector<double> stack;
        for(auto& p: temp){
            stack.push_back((double)(target-p.first)/p.second);
            if(stack.size() >= 2 && stack.back() <= stack[stack.size()-2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};
