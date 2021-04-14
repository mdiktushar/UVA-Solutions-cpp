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

    while(true)
    {
        START:
        int n,m;cin>>n>>m;
        if(!n && !m)
            break;

        vector<int>D,S;
        while(n--){
            int p;cin>>p;
            D.push_back(p);
        }
        while(m--)
        {
            int p;cin>>p;
            S.push_back(p);
        }
        n = D.size();
        m = S.size();

        sort(D.begin(),D.end());
        sort(S.begin(),S.end());

        bool F = true;
        lli sum = 0;
        int j = 0;


        for(int i=0; i<n; i++){

            while(true)
            {
                if(j<m && S[j]<D[i])
                    j++;
                else
                    break;
            }

            if(j == m)
            {
                cout<<"Loowater is doomed!"<<endl;
                goto START;
            }
            else sum += S[j++];
        }

        cout<<sum<<endl;
    }

    return 0;
}

