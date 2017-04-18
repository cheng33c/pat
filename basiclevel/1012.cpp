#include <iostream>
#include <iomanip>

using namespace std;

#define MAXSIZE 1002

int main()
{
  int A1=0,A2=0,A3=0,A5=0;
  double A4=0,cnt_A4=0;
  int cnt_A2=0,N;

  cin>>N;
  for(int i = 0; i < N; i++)
    {
      int tmp;
      cin>>tmp;
      if(tmp % 5 == 0 && tmp % 2 == 0)
        A1 += tmp;
      if(tmp % 5 == 1)
        {
          ++cnt_A2;
          if(cnt_A2 % 2 == 0)
            A2 -= tmp;
          else A2 += tmp;
        }
      if(tmp % 5 == 2) A3++;
      if(tmp % 5 == 3)
        {
          A4+=tmp;
          cnt_A4++;
        }
      if(tmp % 5 == 4 && tmp > A5)
        A5 = tmp;
    }
  if(A1==0) cout<<"N"<<" ";
  else cout<<A1<<" ";
  if(cnt_A2==0) cout<<"N"<<" ";
  else cout<<A2<<" ";
  if(A3==0) cout<<"N"<<" ";
  else cout<<A3<<" ";
  if(cnt_A4==0) cout<<"N"<<" ";
  else cout<<setprecision(1)<<fixed<<A4/cnt_A4<<" ";
  if(A5==0) cout<<"N";
  else cout<<A5;

  return 0;
}
