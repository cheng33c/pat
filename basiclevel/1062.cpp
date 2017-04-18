#include <iostream>
#include <string>

using namespace std;

int gcd(int a,int b);
void split(string ip,int &a,int &b);

int main()
{
    string ip;
    int cnt=0;

    while(cin>>ip) {
        if(cnt!=0) cout<<" ";
        int a=0,b=0;
        split(ip,a,b);
        int mod = gcd(a,b);
        cout<<a/mod<<"/"<<b/mod;
        cnt++;
    }


    return 0;
}

int gcd(int a,int b)
{ 
    return a == 0 ? b : gcd(b%a,a); 
}

void split(string ip,int &a,int &b)
{
    int i;

    for(i = 0; i < ip.length(); i++) {
        if(ip[i] != '/') {
            if(i != 0) a *= 10;
            a += ip[i] - '0';
        }
        else break;
    }
    
    int start = i+1;
    if(i<ip.length()) {
        for(int i = start; i < ip.length(); i++) {
            if(b != start) b *= 10;
            b += ip[i] - '0';
        }
    }
    else b = 0;
}