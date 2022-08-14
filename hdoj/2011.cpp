#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;double sum;
    cin >>m;
    for(int i=1;i<=m;i++)
    {
        sum = 0.0;
        cin >> n ;
        for(int i=1;i<=n;i++)
        {
            double x = 1.0/i;
            if(i%2==0) sum-=x;
            else sum+=x;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}