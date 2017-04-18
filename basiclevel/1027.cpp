#include <iostream>

using namespace std;

int main()
{
  int N,stars=-1,lines=0,t;
  char ch;
  cin>>N>>ch;

  if(N == 1) {
    cout<<ch<<endl<<0;
  }
  else {
  for(t = 1; stars + t * 2 < N; t+=2) {
    stars += t * 2;
    lines++;
  }
  t -= 2;

  for(int i = 0; i < lines; i++) {
    for(int j = 0; j < i; j++)
      cout<<" ";
    for(int j = 0; j < t - i*2; j++)
      cout<<ch;
    cout<<endl;
  }

  for(int i = lines-2; i >= 0; i--) {
    for(int j = 0; j < i; j++)
      cout<<" ";
    for(int j = 0; j < t - i*2; j++)
      cout<<ch;
    cout<<endl;
  }
  cout<<N-stars;
  }

  return 0;
}
