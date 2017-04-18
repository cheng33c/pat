#include <iostream>

using namespace std;

int main()
{
  int N;
  string ip;
  cin>>N;

  for ( int i = 0; i < N; i++ ) {
    int flag = 1;
    cin >> ip;

    for ( int j = 0; j < ip.length(); j++ )
      if ( ip[j] != 'P' || ip[j] != 'A' || ip[j] != 'T' )
        flag = 0;




    if ( flag == 1 )  cout << "YES";
    else              cout << "NO";
    if ( i + 1 != N ) cout<<endl;
  }

  return 0;
}
