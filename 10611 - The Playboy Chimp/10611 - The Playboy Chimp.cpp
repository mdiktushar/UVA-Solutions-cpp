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
    /**
    int t;cin>>t;
    Start:
    while(t--)
    {

    }
**/

    int n;cin>>n;
    vector<lli>v;
    while(n--)
    {
        lli i;cin>>i;
        v.push_back(i);
    }

    int Q;cin>>Q;
    while(Q--)
    {
        lli i;cin>>i;
        auto h1 = lower_bound(v.begin(), v.end(), i);
        auto h2 = upper_bound(v.begin(), v.end(), i);


        if(distance(v.begin(), h1) != 0)
            cout<<*--h1<<' ';
        else
            cout<<"X ";
        if(distance(v.begin(), h2) != v.size())
            cout<<*h2<<endl;
        else
            cout<<"X"<<endl;


    }

    return 0;
}

