bool isPalindrome(vector<int>& a, int l, int r) {
    while (l < r) {
        if (a[l] != a[r])
            return false;
        l++;
        r--;
    }
    return true;
}


//checking with expanding through center
string longestPalindrome(string s) {
    int n = s.size();

    int start = 0;
    int len = 1;

    auto expand = [&](int l, int r) {
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > len) {
                len = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
    };

    for (int i = 0; i < n; i++) {
        expand(i, i);       // odd
        expand(i, i + 1);   // even
    }

    return s.substr(start, len);
}
