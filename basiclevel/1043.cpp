#include <iostream>

using namespace std;

int main()
{
  int a[6];
  string ip;

  for( int i = 0; i < 6; i++ )
    a[i] = 0;

  cin>>ip;

  for( int i = 0; i < ip.length(); i++ )
    if ( ip[i] == 'P' ) a[0]++;
    else if ( ip[i] == 'A' ) a[1]++;
    else if ( ip[i] == 'T' ) a[2]++;
    else if ( ip[i] == 'e' ) a[3]++;
    else if ( ip[i] == 's' ) a[4]++;
    else if ( ip[i] == 't' ) a[5]++;

  while( a[0] != 0 || a[1] != 0 || a[2] != 0 ||
         a[3] != 0 || a[4] != 0 || a[5] != 0 ) {
    if ( a[0] ) { cout.put('P'); a[0]--; }
    if ( a[1] ) { cout.put('A'); a[1]--; }
    if ( a[2] ) { cout.put('T'); a[2]--; }
    if ( a[3] ) { cout.put('e'); a[3]--; }
    if ( a[4] ) { cout.put('s'); a[4]--; }
    if ( a[5] ) { cout.put('t'); a[5]--; }
  }

  return 0;
}
