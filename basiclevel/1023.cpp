#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

void int2str(string &string_tmp,const int &int_tmp)
{
  stringstream stream;
  stream<<int_tmp;
  string_tmp = stream.str();
}

using namespace std;

int main()
{
  int ip[10];
  string res;

  /*
    ip[i][0]: num
    ip[i][1]: flag
   */
  for(int i = 0; i < 10; i++)
    {
      cin>>ip[i];
    }

  for(int i = 1,flag = 0; i < 10; i++)
    {
      if(ip[i] != 0)
        {
          string temp;
          int2str(temp,i);
          res += temp;
          flag = 1;
          ip[i]--;
        }
      if(flag) break;
    }

  for(int i = 0; i < 10; i++)
    {
      if(ip[i] != 0) {
        string temp;
        int2str(temp,i);
        while(ip[i]--)
          res += temp;
      }
    }
  cout<<res;

  return 0;
}
