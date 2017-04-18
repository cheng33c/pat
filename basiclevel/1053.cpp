#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N,D,K;
    int empty=0,probably_empty=0;
    double a,b,e;

    cin>>N>>e>>D;

    for(int i = 0; i < N; i++) {
        cin>>K;
        double sum=0,x;
        int day=0;
        for(int j = 0; j < K; j++) {
            cin>>x;
            if(x<e) day++;
        }
        if(day>K/2&&K>D) empty++;
        else if(day>K/2) probably_empty++;
    }

     a=double(empty)/double(N)*100;
     b=double(probably_empty)/double(N)*100;

     cout<<setprecision(1)<<fixed<<b<<"% "<<a<<"%";

    return 0;
}