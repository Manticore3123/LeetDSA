class Solution {
public:

    bool canEat(vector<int>& piles , int mid , int h){
        long long ans = 0;
        for(int i=0;i<piles.size();i++){
            ans += (piles[i]+mid-1)/mid;
        }
        return ans<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1 , end = *max_element(piles.begin(),piles.end());

        while(st<=end){
            int mid = st + (end-st)/2;

            if(canEat(piles,mid,h)) end = mid-1;
            else st = mid + 1;
            
        }
        return st;
    }
};
