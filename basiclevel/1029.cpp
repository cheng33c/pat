#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool find(string str,char ch);

int main()
{
    string ip,ip2;
    string keybreak;

    cin>>ip>>ip2;

    for(int i=0; i < ip.length(); i++) {
        if(!find(ip2,ip[i]))
            keybreak+=toupper(ip2[i]);
    }
    cout<<keybreak;

    return 0;
}

bool find(string str,char ch)
{
    for(int i = 0; i < str.length(); i++)
        if(str[i]==ch) return 1;
    return 0;
}