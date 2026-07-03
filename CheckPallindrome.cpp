bool isPalindrome(vector<int>& a, int l, int r) {
    while (l < r) {
        if (a[l] != a[r])
            return false;
        l++;
        r--;
    }
    return true;
}
