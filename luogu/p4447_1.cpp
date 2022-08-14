#include <bits/stdc++.h>
using namespace std;
int n, s[100010];
int idx , ans = 100000;
struct S
{
    int len, top;
}t[100010];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n);
   // cout << idx << endl;
    for(int i = 0; i < n; i++)
    {
        int tmp = s[i];
        bool bad = true;
        cout << "idx is " << idx <<endl;
        for(int j = idx - 1; j >= 0; j--)
            if(tmp == t[j].top + 1)
            {
                t[j].top = tmp;
                t[j].len++;
                bad = false;
                break;
            }
        if(bad)
        {
            t[idx].top = tmp;
            t[idx].len = 1;
            idx++;
        }
    }

    for(int i = 0; i < idx; i++)
        ans = min(ans, t[i].len);
    printf("%d\n", ans);

    return 0;
}