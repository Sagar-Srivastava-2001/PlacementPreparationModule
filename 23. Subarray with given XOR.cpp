int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int ans = 0; 

    int xorArr[n];

    unordered_map<int, int> mp;
    xorArr[0] = A[0];

    for (int i = 1; i < n; i++)
        xorArr[i] = xorArr[i - 1] ^ A[i];

    for (int i = 0; i < n; i++) {
        int tmp = B ^ xorArr[i];

        ans = ans + mp[tmp];

        if (xorArr[i] == B)
            ans++;

        mp[xorArr[i]]++;
    }

    return ans;
}
