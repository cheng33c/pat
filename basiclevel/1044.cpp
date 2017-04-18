#include <iostream>
#include <sstream>
using namespace std;

int ten_2_13( int n )
{
  int _13=0, exp=1;
  while( n ) {
    _13 += (n % 13) * exp;
    n /= 13;
    exp *= 10;
  }
  return _13;
}

int thirdteen_2_10( int n )
{
  int _10=0, exp=1;
  while( n ) {
    _10 += ( n % 10 ) * exp;
    n /= 10;
    exp *= 13;
  }
  return _10;
}

int main()
{
  string lowb[13] = {"tret","jan","feb","mar","apr","may","jun",
                     "jly","aug","sep","oct","nov","dec"};
  string highcold[12] = {"tam","hel","maa","huh","tou","kes","hei","elo",
                     "syy","lok","mer","jou"};
  int N;
  string ip;

  cin >> N;
  cin.ignore();
  for( int i = 0; i < N; i++ ) {
    getline( cin, ip );

    if( ip[0] >= '0' && ip[0] <= '9' ) {
      int earth = 0, earth_len;
      earth_len = ip.length();
      for( int j = 0; j < earth_len; j++ )
        earth = earth * 10 + ( ip[j] - '0' );
      earth = ten_2_13(earth);

      if(earth >= 13)
        cout << highcold[ earth / 10 - 1 ] << " " << lowb[ earth % 10];
      else cout << lowb[ earth % 10 ];
    }

    else {
      int mars_dick_len = ip.length();
      int earth_num=0;

      if( mars_dick_len > 4 ) {
        string highcold_part, lowarm_part;
        int j;
        for( j = 0; ip[j] != ' '; j++ )
          highcold_part += ip[j];
        for( j = j + 1; j < mars_dick_len; j++ )
          lowarm_part += ip[j];

        for( j = 0; j < 12; j++ )
          if( highcold[j] == highcold_part ) {
            earth_num += ( j + 1 ) * 13;
            break;
        }

        for( j = 0; j < 13; j++ )
          if( lowb[j] == lowarm_part ) {
            earth_num += j;
            break;
          }

      }
      else {
        string idontknow_part;
        int    earth;
        int j;
        for( j = 0; j < mars_dick_len; j++ )
          idontknow_part += ip[j];

        for( j = 0; j < 13; j++ ) {
          if( lowb[j] == idontknow_part ) {
            earth_num += j;
            break;
          }
          if( highcold[j] == idontknow_part && j <= 11 ) {
            earth_num += (j + 1) * 13;
            break;
          }
        }

        earth_num = thirdteen_2_10(earth_num);
      }
      cout << earth_num;
    }


    if( i != N-1 ) cout << endl;
  }

  return 0;
}
