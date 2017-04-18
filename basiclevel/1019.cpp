#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

inline void _sortInt(int n,int &inc,int &dec);
inline void _int2str(string &string_temp,int &int_temp);
inline string extra(int tmp);

int main()
{
  int N,tmp,inc,dec;
  string str_inc,str_dec;

  cin>>N;

  _sortInt(N,inc,dec);
  if(inc == dec)
    cout<<inc<<" - "<<dec<<" = "<<"0000";
  else {
      do {

          if( inc < 1000 ) str_inc = extra(inc);
          else             _int2str(str_inc,inc);
          if( dec < 1000 ) extra(dec);
          else             _int2str(str_dec,dec);

          tmp = inc - dec;
          cout<<str_inc<<" - "<<str_dec<<" = "<<tmp;
          if(tmp != 6174) cout<<endl;
          _sortInt(tmp,inc,dec);
        } while(tmp!=6174);
    }


  return 0;
}

/*
  inc: increase integer
  dec: decrease integer
*/
inline void _sortInt(int n,int &inc,int &dec)
{
  int a[4];
  a[0] = n / 1000;
  a[1] = n % 1000 / 100;
  a[2] = n % 100 / 10;
  a[3] = n % 10;
  sort(a,a+4);
  inc = a[0] + a[1]*10 + a[2]*100 + a[3]*1000;
  dec = a[3] + a[2]*10 + a[1]*100 + a[0]*1000;
}

inline string extra(int tmp)
{
  string str_tmp;
  _int2str(str_tmp,tmp);
  if(str_tmp.length() == 1) {
    str_tmp[3] = str_tmp[0];
    str_tmp[0] = str_tmp[1] = str_tmp[2] = '0';
    str_tmp+=str_tmp[1]+str_tmp[2]+str_tmp[3];
  }
  else if(str_tmp.length() == 2) {
    str_tmp[3] = str_tmp[1];
    str_tmp[2] = str_tmp[0];
    str_tmp[0] = str_tmp[1] = '0';
    str_tmp+=str_tmp[2];
    str_tmp+=str_tmp[3];
  }
  else if(str_tmp.length() == 3) {
    str_tmp[3] = str_tmp[2];
    str_tmp[2] = str_tmp[1];
    str_tmp[1] = str_tmp[0];
    str_tmp[0] = '0';
    str_tmp+=str_tmp[3];
  }
  return str_tmp;
}

inline void _int2str(string &string_tmp,int &int_tmp)
{
  stringstream stream;
  stream<<int_tmp;
  string_tmp = stream.str();
}
