#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  int N,a,b,max=0;

  cin>>N;

  for( int i = 0,tmp; i < N; i++ ) {
    cin>>a>>b;
    tmp = pow(a,2) + pow(b,2);
    if( tmp > max ) max = tmp;
  }

  cout<<setprecision(2)<<fixed<<sqrt(max);


  return 0;
}
