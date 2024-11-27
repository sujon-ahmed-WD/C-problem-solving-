#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int e = 0;
    int g = 0;
    int y = 0;
    int p = 0;
    int t = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            e++;
        }
        if (s[i] == 'g' || s[i] == 'G')
        {
            g++;
        }
        if (s[i] == 'y' || s[i] == 'Y')
        {
            y++;
        }
        if (s[i] == 'p' || s[i] == 'P')
        {
            p++;
        }
        if (s[i] == 't' || s[i] == 'T')
        {
            t++;
        }
    }
    int low = min({e, g, y, p, t});
    cout<<low;
 
   

    return 0;
}