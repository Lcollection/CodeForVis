#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;int a[20];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int ans=0;
        memset(a,0,sizeof(a));
        for(int i=n;i<=m;i++)
        {
            //int x,y,z;
            int  x = i/100;
            int y = i/10-x*10;
            int z = i%100-y*10;
            //cout << x << " " << y << " " << z <<endl;  
            if((x*x*x + y*y*y + z*z*z) == i)
            {
                cout << i << " "; ans++;
            }
        }
        if(ans==0) cout << "no";
        cout << endl;
    }
    return 0;
}

/*
多个输出的时候，数列最后一个数字之后没有空格。
*/