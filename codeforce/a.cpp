#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    for(int i=1;i<=t;i++)
    {
        int w,h,n,sum=1;
        cin >> w >> h >> n;
        do
        {
            if(w%2==0 && h%2!=0)
            {
                w/=2;
                sum*=2;
            }
            if(w%2!=0 && h%2==0)
            {
                h/=2;
                sum*=2;
            }
            if(w%2==0 && h%2==0)
            {
                w/=2;
                sum*=2;
            }
            //cout << "This is " << sum << endl;
            //cout << "1 % 2 is " <<1%2 << endl;
        } while(w%2==0 || h%2==0 );
        if(sum < n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}