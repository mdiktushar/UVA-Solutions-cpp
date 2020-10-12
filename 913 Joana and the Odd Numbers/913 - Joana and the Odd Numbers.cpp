#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;
    while(cin>>n)
    {
        n/=2;
        n++;
        n*=n;
        n*=6;
        n-=9;
        cout<<n<<endl;
    }

    return 0;
}

