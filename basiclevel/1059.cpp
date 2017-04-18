#include <iostream>
#include <cmath>

#define MAXSIZE 10005

using namespace std;

inline int judge(int ID,int rank);
inline bool isprime(int n);

int main()
{
  int N,K,ID[MAXSIZE][2];

  for(int i = 0; i < MAXSIZE; i++)
    ID[i][0] = ID[i][1] = 0;

  cin>>N;
  for(int i = 1; i <= N; i++)
    {
      cin>>ID[i][1];
    }

  cin>>K;
  for(int i = 1; i <= K; i++)
    {
      string search;
      int flag=0;

      cin>>search;
      for(int j = 1; j <= N; j++)
        {
          if(ID[j][1] == stoi(search))
            {
              cout<<search<<": ";
              if(ID[j][0] == 0)
                {
                  int rank = judge(ID[j][1],j);
                  if(rank == 1)
                    cout<<"Mystery Award";
                  else if(rank == 2)
                    cout<<"Chocolate";
                  else if(rank == 3)
                    cout<<"Minion";
                  ID[j][0] = 1;
                  flag = 1;
                }
              else
                {
                  cout<<"Checked";
                  flag = 1;
                }
              if(flag)
                break;
            }
        }
      if(flag == 0)
        cout<<search<<": Are you kidding?";
      if(i != K)
        cout<<endl;
    }

  return 0;
}

inline int judge(int ID,int rank)
{
  if(rank == 1)
    {
      return 1;
    }
  else if(isprime(rank))
    {
      return 2;
    }
  else
    {
      return 3;
    }
}

inline bool isprime(int n)
{
  int k = sqrt(n);

  for(int i = 2; i <= k; i++)
    {
      if(n % k == 0)
        return 1;
    }
  return 0;
}
