#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void split(string str, long &a, long &b)
{
    int str_len = str.length(), i;
    string str_a, str_b;
    for (i = 0; str[i] != '/' && i < str_len; i++)
        str_a += str[i];

    a = stoi(str_a);
    if( i != str_len ) {
        for (i++; i < str_len; i++)
            str_b += str[i];
        if (str_b != "")
            b = stoi(str_b);
    }
    else b = 1;
}

long gcd(long a, long b)
{
    return a == 0 ? b : gcd(b % a, a);
}

int main()
{
    int N;
    long ason=0, bmom=1;
    string ip;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> ip;
        long a, b, fuckgcd;
        split(ip, a, b);
        
        a *= bmom;
        ason *= b;
        bmom *= b;
        ason += a;

        fuckgcd = gcd(ason,bmom);
        if(fuckgcd != 1) {
            ason /= fuckgcd;
            bmom /= fuckgcd;
        }
    }

    long integer = ason / bmom;

    if(integer != 0) {
        ason -= bmom * integer;
        cout << integer;
    }
    
    if (ason != 0) {
        if(integer != 0) cout << " ";
        cout << ason << "/" << bmom;
    }
    if( integer == 0 && ason == 0 ) cout << 0;

    return 0;
}