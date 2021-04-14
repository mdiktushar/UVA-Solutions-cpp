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
    int n;
    while(cin>>n)
    {
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int M;cin>>M;
        int MIN = INT_MAX;
        int a, b;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]+arr[j]==M)
                {
                    int temp = abs(arr[i]-arr[j]);
                    if(temp < MIN)
                    {
                        if(arr[i]>arr[j])
                            swap(arr[i],arr[j]);
                        a = arr[i],b = arr[j];
                        MIN = abs(arr[i]-arr[j]);
                    }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl<<endl;


    }

    return 0;
}

