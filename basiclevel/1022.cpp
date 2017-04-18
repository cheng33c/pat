#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void int2str(const int &int_temp,string &string_temp)
{
  stringstream stream;
  stream<<int_temp;
  string_temp = stream.str();
}

int main()
{
  int A,B,D,res=0;
  string res_d,tmp;
  int flag = 0;


  cin>>A>>B>>D;

  res = A + B;

  while(res)
    {
      int c = res % D;
      res = res / D;
      int2str(c,tmp);
      tmp += res_d;
      res_d = tmp;
      flag = 1;
    }
  if(flag == 0) res_d = "0";
  cout<<res_d;

  return 0;
}
