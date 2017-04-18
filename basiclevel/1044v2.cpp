#include <iostream>
#include <algorithm>
using namespace std;

string ten_2_13_str( string n )
{
  string _13;
  int exp=1;
  while( n ) {
    _13 += ( ( n - '0' ) % 13 ) * exp;
    n /= 13;
    if( n>= 10 ) _13 += ( n - 10 + 'A');
    exp *= 10;
  }
  return _13;
}
int thirdteen_2_10( string n )
{
  int _10=0, exp=1, nlen;
  nlen = n.length();
  for( int i = 0; i < nlen; i++ ) {
    if( n[i] >= 'A' )
      _10 += ( n[i] - 'A' + 10) * exp;
    else _10 += ( n[i] - '0' ) * exp;
    exp *= 13;
  }
  return _10;
}

int main()
{
  int N;
  string lowarm[13] = {"tret","jan","feb","mar","apr","may",
                       "jun","jly","aug","sep","oct","nov","dec"};
  string highcold[12] = {"tam","hel","maa","huh","tou","kes",
                         "hei","elo","syy","lok","mer","jou"};

  cin>>N;
  cin.ignore();

  for( int i = 0; i < N; i++ ) {
    getline( cin, ip );

    if( ip[0] >= '0' && ip[0] <= '9' ) {
      int itsint = stoi( ip );
      string _13 = ten_2_13(itsint);

    }
  }

  return 0;
}
