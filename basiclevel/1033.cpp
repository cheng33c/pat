#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool find_ch(string str,char ch);

int main()
{
    string ip,forbid;
    bool plus=1,flag=0;
    
    cin>>forbid>>ip;

    if(find_ch(forbid,'+')) plus=0;
    for(int i = 0; i < ip.length(); i++) {
        if(isalpha(ip[i])) {
            char upper = toupper(ip[i]);
            if(ip[i]>='A' && ip[i]<='Z') {
                if(plus && !find_ch(forbid,upper)) { putchar(ip[i]); flag=1; }
            }
            else if(!find_ch(forbid,upper)) {
                putchar(ip[i]);
                flag=1;
            }
        }
        else if(!find_ch(forbid,ip[i])) { putchar(ip[i]); flag=1; }
    }

    if(flag == 0) cout<<endl;

    return 0;
}

bool find_ch(string str,char ch)
{
    for(int i = 0; i < str.length(); i++)
        if(str[i] == ch)
            return 1;
    return 0;
}