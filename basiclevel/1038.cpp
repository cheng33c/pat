#include <iostream>

using namespace std;

#define maxsize 100001

int search(int *a, int x, int len);

int main()
{
    int N,a[maxsize],x,K;

    cin>>N;

    for(int i = 0; i < maxsize; i++)
        a[i] = 0;

    for(int i = 0,t; i < N; i++) {
        cin>>t;
        a[t]++;
    }
        
    cin>>K;
    for(int i = 0; i < K; i++) {
        int cnt=0;
        cin>>x;
        cout<<a[x];
        if(i+1 != K) cout<<" ";
    }

    return 0;
}