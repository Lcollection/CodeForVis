#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int a,b,c,flag=0;
        cin >> a >> b >> c;
        if(a==1) flag++; 
        if(b==1) flag++;
        if(c==1) flag++;
        if(flag>=2) sum++;
    }
    cout << sum << endl;
    return 0;
}