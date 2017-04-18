#include <iostream>

using namespace std;

#define MAXSIZE 10003

int main()
{
  int N;
  int a[MAXSIZE],max_pos;

  for(int i = 0; i < MAXSIZE; i++)
      a[i] = 0;

  cin>>N;

  for(int i = 1; i <= N; i++)
    {
      string temp,team_no;
      int no;
      int sorce;
      cin>>temp>>sorce;
      for(int i = 0; temp[i] != '-'; i++)
        team_no += temp[i];
      no = stoi(team_no);
      a[no] += sorce;
    }

  max_pos = 1;
  for(int i = 2; i < MAXSIZE; i++)
    {
      if(a[i] > a[max_pos]) max_pos=i;
    }

  cout<<max_pos<<" "<<a[max_pos];

  return 0;
}
