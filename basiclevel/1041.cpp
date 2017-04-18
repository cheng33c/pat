#include <iostream>

using namespace std;

#define MAXSIZE 1001

int main()
{
  int N,ip_try[MAXSIZE],ip_test[MAXSIZE];
  string ip_no[MAXSIZE];
  cin>>N;

  for( int i = 0; i < N; i++ )
    cin>>ip_no[i]>>ip_try[i]>>ip_test[i];

  cin>>N;
  for( int i = 0; i < N; i++ )
    {
      int x;
      cin>>x;
      for( int j = 0; i < N; j++)
        if( ip_try[j] == x ) {
          cout<<ip_no[j]<<" "<<ip_test[j];
          break;
        }
      if( i + 1 != N ) cout<<endl;
    }

  return 0;
}
