#include "my_string.h"

int min3(int a, int b, int c)
{
    if(a <= b && a <= c) return a;
    if(b <= a && b <= c) return b;
    return c;
}

int edit_distance(const char *s1, const char *s2)
{
    int m = my_strlen(s1), n = my_strlen(s2);
    int dp[m+1][n+1];

    for (int i = 0; i <= m; i++) dp[i][0] = i;
    for (int j = 0; j <= m; j++) dp[0][j] = j;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min3(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
            }
        }
    }
    return dp[m][n];
}
