#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // int pos=s.find("EGYPT");
    while(1)
    {
        int pos=s.find("EGYPT"); 

        if(pos!=-1)
        {
            s.replace(pos,5," ");
        }
        else
        {
            break;
        }
    }
     
    cout << s;

    return 0;
}