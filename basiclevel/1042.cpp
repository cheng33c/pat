#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int a[26],max;
  char maxalpha,ip[1005];
  for( int i = 0; i < 26; i++ )
    a[i] = 0;

  cin.getline(ip,sizeof(ip));
  for( int i = 0; i < strlen(ip); i++ ) {
    char ch = ip[i];
    int  index;
    if( ch >= 'a' && ch <= 'z' ) {
      index = ch - 'a';
      a[index]++;
    }
    else if( ch >= 'A' && ch <= 'Z' ) {
      index = ch - 'A';
      a[index]++;
    }
  }

  max = -1;
  for( int i = 0; i < 26; i++ ) {
    if( a[i] > max ) { max = a[i]; maxalpha = i + 'a'; }
  }

  cout<<maxalpha<<" "<<max;

  return 0;
}
