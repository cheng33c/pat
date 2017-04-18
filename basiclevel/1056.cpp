#include <iostream>

using namespace std;

int main()
{
  int cnt_a=0,sum=0,a[10],N;
  cin>>N;
  for( int i = 0; i < N; i++ ) cin>>a[i];

  for( int i = 0; i < N; i++ )
    for( int j = 0; j < N; j++ ) {
      if( j == i ) continue;
      sum += a[i] * 10 + a[j];
    }

  cout<<sum;

  return 0;
}
