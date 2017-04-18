#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

bool islegal(string ip);

int main()
{
    int N,cnt=0;
    double sum,d;
    string ip;

    cin>>N;
    for(int i = 0; i < N; i++) {
        if(cin>>ip && !islegal(ip)) {
            cout<<"ERROR: "<<ip<<" is not a legal number";
            if(i+1!=N) cout<<endl;
            continue;
        }
        cnt++;
        stringstream sstr(ip);
        sstr>>d;
        sum += d;
    }

    if(cnt==0)
        cout<<"The average of 0 numbers is Undefined";
    else if(cnt==1)
        cout<<"The average of 1 number is "<<sum;
    else
        cout<<"The average of "<<cnt<<" numbers is "
            <<setprecision(2)<<fixed<<sum/cnt;


    return 0;
}

bool islegal(string ip)
{
    int cnt_f=0,cnt_i=0,i;

    for(i = 0; i < ip.length(); i++) {
        if(i==0 && ip[0]=='-') continue;
        if(ip[i] > '0' && ip[i] < '9' ) { cnt_i++; continue; }
        if(ip[i] == '.') break;
        return 0;
    }

    for(i++; i < ip.length(); i++) {
        if(ip[i] > '0' && ip[i] < '9') { cnt_f++; continue; }
        return 0;
    }

    if(cnt_i!=0 && cnt_f < 3) return 1;
}