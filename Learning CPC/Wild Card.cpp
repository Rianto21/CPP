#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > dp;
int finding(string& s, string& p, int n, int m)
{
    if (n < 0 && m < 0)
        return 1;
    if (m < 0)
        return 0;
    if (n < 0)
    {
        while (m >= 0)
        {
            if (p[m] != '*')
                return 0;
            m--;
        }
        return 1;
    }
    if (dp[n][m] == -1)
    {
        if (p[m] == '*')
        {
            return dp[n][m] = finding(s, p, n - 1, m)
                              || finding(s, p, n, m - 1);
        }
        else
        {
            if (p[m] != s[n] && p[m] != '?')
                return dp[n][m] = 0;
            else
                return dp[n][m]
                       = finding(s, p, n - 1, m - 1);
        }
    }
    return dp[n][m];
}


bool isMatch(string s, string p)
{
    dp.clear();
    dp.resize(s.size() + 1, vector<int>(p.size() + 1, -1));
    return dp[s.size()][p.size()]
           = finding(s, p, s.size() - 1, p.size() - 1);
}


int main()
{
    string match1;
    getline(cin, match1);

    std::vector< string > wild = {};

    int case1;
    cin >> case1;
    for(int i = 0; i <= case1; i++){
    string dart;
    getline(cin, dart);

    wild.push_back(dart);
    }
    for(int i = 1; i <= wild.size(); i++){
        if (isMatch(wild[i], match1))
        cout << wild[i] << endl;
    }




    return 0;
}
