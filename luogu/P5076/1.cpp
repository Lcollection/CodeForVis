#include <iostream>
#include <cstdio>
#define INF 2147483647
using namespace std;
struct tree
{
    int val,cnt,size;
    int ls,rs;
}x[10010];
int bnt = 0;
void add(int wz,int v)
{
    x[wz].size++;   
    if(x[wz].val == v)
    {
        x[wz].cnt++;
        return;
    }
    if(x[wz].val > v)
    {
        if(x[wz].ls != 0) add(x[wz].ls,v);
        else
        {
            bnt++;
            x[bnt].val = v;
            x[bnt].size = 1;
            x[bnt].cnt = 1;
            x[wz].ls = bnt;
        }
    }
    else
    {
        if(x[wz].rs != 0) add(x[wz].rs,v);
        else
        {
            bnt++;
            x[bnt].val = v;
            x[bnt].size = 1;
            x[bnt].cnt = 1;
            x[wz].rs = bnt;
        }
    }
}
int getbyrk(int wz,int rank)
{
    if(wz == 0) return INF;
    if(x[x[wz].ls].size  >= rank ) return getbyrk(x[wz].ls,rank);
    if(x[x[wz].ls].size + x[wz].cnt >= rank) return x[wz].val;
    return getbyrk(x[wz].rs,rank - x[x[wz].ls].size - x[wz].cnt);
}

int getbyv(int wz,int val)
{
    if(wz == 0) return 0;
    if(val == x[wz].val) return x[x[wz].ls].size + 1;
    if(val < x[wz].val) return getbyv(x[wz].ls,val);
    return getbyv(x[wz].rs,val) + x[x[wz].ls].size + x[wz].cnt;
}

int findper(int wz,int val,int ans)
{
    if(x[wz].val >= val)
    {
        if(x[wz].ls == 0) return ans;
        else return findper(x[wz].ls ,val ,ans);
    }
    else
    {
        if(x[wz].rs == 0)
        {
            if(x[wz].val < val) return x[wz].val;
            else return ans;
        }
        if(x[wz].cnt != 0) return findper(x[wz].rs , val ,x[wz].val);
        else return findper(x[wz].rs, val, ans);
    }    
}
int findne(int wz,int val,int ans)
{
    if(x[wz].val <= val)
    {
        if(x[wz].rs == 0) return ans;
        else return findne(x[wz].rs,val,ans);
    }
    else
    {
        if(x[wz].ls == 0)
        {
            if(x[wz].val > val) return x[wz].val;
            else return ans;
        }
        if(x[wz].cnt != 0) return findne(x[wz].ls ,val ,x[wz].val);
        else return findne(x[wz].ls,val,ans);
    }

}

int main()
{
    int n,f,xx;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> f >> xx;
        if(f == 1) cout << getbyv(1,xx);
        if(f == 2) cout << getbyrk(1,xx);
        if(f == 3) cout << findper(1,xx,-INF);
        if(f == 4) cout << findne(1,xx,INF);
        if(f == 5) add(1,xx);
    }
    return 0;
}
