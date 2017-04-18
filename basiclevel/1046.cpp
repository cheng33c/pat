#include <iostream>

using namespace std;

int main()
{
    int N,ja,ju,ya,yu;
    int j=0,y=0;

    cin>>N;

    for(int i = 0; i < N; i++) {
        cin>>ja>>ju>>ya>>yu;
        if(ju==ja+ya && yu==ja+ya) ;
        else if(ju==ja+ya) y++;
        else if(yu==ja+ya) j++;
    }
    cout<<j<<" "<<y;

    return 0;
}