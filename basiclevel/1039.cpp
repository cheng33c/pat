#include <iostream>
#include <string>

using namespace std;

bool search(string &a,char b);

int main()
{
  string a,b;
  int alen,cnt=0;

  cin >> a >> b;

  alen = a.length();

  for(int i = 0; i < b.length(); i++)
    if(search(a,b[i]))
      cnt++;

  if(cnt == b.length())
    cout<<"Yes "<<a.length()-b.length();
  else
    cout<<"No "<<b.length()-cnt;

  return 0;
}

bool search(string &a,char b)
{
  for(int i = 0; i < a.length(); i++)
    if(a[i] == b) {
      a[i] = '#';
      return 1;
    }
  return 0;
}
