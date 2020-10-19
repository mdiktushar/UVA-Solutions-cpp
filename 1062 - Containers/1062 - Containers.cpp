#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

#define lli long long int

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

void zeroarr(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
}

lli findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

void viewarr(lli arr[], lli n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

void viewarr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

stack<char>st;
vector<stack<char>>v;
string s;

int add(int i)
{
    for(int j = 0; j < v.size(); j++) {
        if(s[i] <= v[j].top()) {
            v[j].push(s[i]);
            return 0;
        }
    }
    v.push_back(st);
    v[v.size() - 1].push(s[i]);

    return 1;
}

//md.imrul kayes
int main()
{
    //int t;cin>>t;
    int t = 1;
    while(true)
    {
        cin>>s;
        if(s=="end")
            break;


        int n = s.size();
        v.clear();
        int ans=0;

        for(int i=0; i<n; i++)
        {
            ans += add(i);

        }
        cout<<"Case "<<t++<<": "<<ans<<endl;

    }
    return 0;
}

