int closestSubarrSumToK(vector<int>& arr, int k) {
    int diff = INT_MAX;
    int ans = -1;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (abs(k - sum) < diff) {
                diff = abs(k - sum);
                ans = sum;
            }
        }
    }
    return ans;
}
