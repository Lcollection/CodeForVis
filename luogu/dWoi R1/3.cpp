#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n;

struct node
{
    int flag;
    int data;    
}a[100010];
bool cmp(node a,node b)
{
    if(a.data == b.data) return a.flag > b.flag;
    return a.data < b.data;
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int t,k;
        cin >> t >> k;
        a[i].data = t * k;
        a[i].flag = t;
    }
    sort(a,a+n,cmp);
    for(int i=n;i>0;i--)
    {
            cout << a[i].flag << " ";
    }
    return 0;
}
