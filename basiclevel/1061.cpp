#include <iostream>

using namespace std;

int main()
{
    int N,M;
    int score[100],right[100];

    cin>>N>>M;

    for(int i = 0; i < M; i++)
        cin>>score[i];
    for(int i = 0; i < M; i++)
        cin>>right[i];

    for(int i = 0; i < N; i++) {
        int stu_score = 0,write;
        for(int j = 0; j < M; j++) {
            cin>>write;
            if(write == right[j])
                stu_score += score[j];
        }
        cout<<stu_score;
        if(i+1 != N) cout<<endl;
    }

    return 0;
}