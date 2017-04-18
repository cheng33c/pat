#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define maxsize 100001

int main()
{
    int sum,zero=0,one=0;
    char ip[maxsize];

    cin.getline(ip,maxsize);
    for(int i = 0; i < strlen(ip); i++) {
        if(ip[i]>='a' && ip[i]<='z')
            sum += ip[i]-'a'+1;
        else if(ip[i]>='A' && ip[i]<='Z')
            sum += ip[i]-'A'+1;
    }

    while(sum) {
        if(sum % 2 == 0) zero++;
        else             one++;
        sum /= 2;
    }
    cout<<zero<<" "<<one;

    return 0;
}