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

//cin.ignore();
//getline(cin,s);

//md.imrul kayes
int main()
{
    int I = 1;
    while(true)
    {
        int n,q;
        cin>>n>>q;
        if(!n && !q)
            break;

        vector<int>v;

        while(n--)
        {
            int p;cin>>p;
            v.push_back(p);
        }
        sort(v.begin(), v.end());

        cout<<"CASE# "<<I++<<":"<<endl;
        while(q--)
        {
            int f;cin>>f;
            auto F = lower_bound(v.begin(), v.end(), f);

            if( F != v.end() && *F == f)
            {
                cout<<f<<" found at "<<distance(v.begin(), F)+1<<endl;
            }
            else
            {
                cout<<f<<" not found"<<endl;
            }
        }

    }

    return 0;
}

