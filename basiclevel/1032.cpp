#include <iostream>

using namespace std;

#define maxsize 100001

int main()
{
    int a[maxsize],N,team,score,max=0,maxpos;

    cin>>N;
    for(int i = 1; i <= N; i++) a[i] = 0;
    for(int i = 0; i < N; i++) {
        cin>>team>>score;
        a[team] += score;
        if(a[team]>max) {
            max=a[team]; 
            maxpos = team;
        }
    }
    cout<<maxpos<<" "<<max;


    return 0;
}