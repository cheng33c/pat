#include <iostream>
#include <string>

using namespace std;

int main()
{
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
    int N,value,flag,cnt=0;
    string ip,fatal_id[100];

    cin>>N;

    for(int i = 0; i < N; i++) {
        cin>>ip;
        value = 0;
        flag = 1;
        for(int j = 0; j < 17; j++)
            if(ip[j] >= '0' && ip[j] <= '9')
                value += (ip[j]-'0')*weight[j];
            else { flag = 0; break; }
        
        if(flag) {
            value %= 11;
            if(ip[17] != M[value]) flag = 0;
        }
        if(!flag) fatal_id[cnt++] = ip;
    }

    if(cnt==0) cout<<"All passed";
    else
        for(int i = 0; i < cnt; i++){
            cout<<fatal_id[i];
            if(i+1 != cnt) cout<<endl;
        }

    return 0;
}