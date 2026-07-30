#include <algorithm>
class Solution {
public:
    int hrs(vector<int>& piles, int b){
        int n = piles.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += ceil((double)piles[i]/b);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1, end = *max_element(piles.begin(), piles.end());
        int ans = end;
        while(st<=end){
            int mid = st+(end-st)/2;
            if( hrs(piles,mid) > h){
                st = mid+1;
            }else if(hrs(piles,mid) <= h){
                end = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};
