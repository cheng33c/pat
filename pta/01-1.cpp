#include <iostream>

using namespace std;

#define MAXSIZE 100005

int main()
{
    int N;
    int a[MAXSIZE];
    long long max = 0;

    cin>>N;
    for(int i = 0; i < N; i++) cin>>a[i];

    for(int i = 0; i < N; i++) {
        if( a[i] < 0 ) continue;
        int sum = a[i];
        if(sum > max) max = sum;
        for(int j = i + 1; j < N; j++) {
            sum += a[j];
            if( sum > max ) max = sum;
            if(sum < 0) break;
        }
    }

    cout<<max;

    return 0;
}
