#include <iostream>

using namespace std;

int main()
{
    int M,N,A,B,V;
    cin>>M>>N>>A>>B>>V;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            int x;
            cin>>x;
            if( x>=A && x <=B ) { 
                cout.fill('0');
                cout.width(3);
                cout<<V; 
            }
            else {
                cout.fill('0');
                cout.width(3);
                cout<<x;
            }
            if(j+1 != N) cout<<" ";
        }
        if(i+1 != M) cout<<endl;
    }

    return 0;
}