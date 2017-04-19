#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  string ip;
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
      int mod;
      if( itsint > 13 && itsint % 13 != 0 )
        cout << highcold[ itsint / 13 - 1 ] << " " 
              << lowarm[ itsint % 13 ];
      else {
        if( itsint >= 13 )
          cout << highcold[ itsint / 13 - 1 ];
        else
          cout << lowarm[ itsint ];
      }
    }

    else {
      int ip_len = ip.length();
      int num = 0;
      if( ip_len > 4 ) {
        string highcold_part, lowarm_part;
        int j;
        for( j = 0; ip[j] != ' '; j++ )
          highcold_part += ip[j];
        for( j++; j < ip_len; j++ )
          lowarm_part += ip[j];
        for( int j = 0; j < 12; j++ )
          if( highcold[j] == highcold_part ) {
            num += ( j + 1 ) * 13;
            break;
          }
        for( int j = 0; j < 13; j++ )
          if( lowarm[j] == lowarm_part ) {
            num += j;
            break;
          }
        cout << num;
      }
      else {
        for( int j = 0; j < 12; j++ )
          if( highcold[j] == ip ) {
            num += ( j + 1 ) * 13;
            break;
          }
        for( int j = 0; j < 13; j++ )
          if( lowarm[j] == ip ) {
            num += j;
            break;
          }
        cout << num;
      }
    }

    if( i != N-1 ) cout<<endl;
  }

  return 0;
}
