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

    string s,t;
    Start:
    while(cin>>s>>t){

        int L1 = s.size();
        int L2 = t.size();
        string R = "";
        int j=0;
        for(int i=0; i<L1; i++)
        {
            for(;j<L2; j++)
            {
                if(s[i] == t[j]){
                    R += t[j];
                    j++;
                    break;
                }
            }
            if(R==s){
                cout<<"Yes"<<endl;
                goto Start;
            }
        }
        cout<<"No"<<endl;
    }

    return 0;
}

