#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  // Input string
    int n = s.length();  // Length of the string
    int ans = 0;  // To store the length of the longest substring

    // Outer loop to fix the starting point of the substring
    for (int i = 0; i < n; i++) {
        int hashing[256] = {0};  // Reset hashing array for each new start
        // Inner loop to check substrings starting from i
        for (int j = i; j < n; j++) {
            if (hashing[s[j]] == 1)  // If the character is already in the substring
                break;  // Break the inner loop, since a duplicate is found
            ans = max(ans, j - i + 1);  // Update the length of the longest substring
            hashing[s[j]] = 1;  // Mark the character as seen
        }
    }

    cout << "The length of the longest substring without repeating characters is: " << ans << endl;
    return 0;
}
