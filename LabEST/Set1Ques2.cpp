class Solution {
public:
    int minPlatform(vector<int> &arr, vector<int> &dep) {
        vector<pair<int,int>> events;

        for (int x : arr) events.push_back({x, +1});
        for (int x : dep) events.push_back({x, -1});

        sort(events.begin(), events.end(), [](auto &a, auto &b){
            if (a.first == b.first)
                return a.second > b.second;
            return a.first < b.first;
        });
      
        int curr = 0, ans = 0;
      
        for (auto &e : events) {
            curr += e.second;
            ans = max(ans, curr);
        }
      
        return ans;
    }
};
