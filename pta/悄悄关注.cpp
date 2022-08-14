#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    map<string,int>mp;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        string name;
        cin >> name;
        s.insert(name);
    }
    int m;
    cin >> m;
    for(int i=1;i<=m;i++)
    {
        string name;
        int x;
        cin >> name >> x;
        ave+=x;
        mp[name] = a;
    }
    ave/=m;
    int f=0;
    for(auto i:mp)
    {
        if(mp.second > ave && s.count(i.first)==0)
        {
            cout << "\n";
            cout << i.first;
            f=1;
        }
    }
    if(f == 0) cout << "Bing Mei You";
    return 0;
}