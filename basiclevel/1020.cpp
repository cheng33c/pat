#include <iostream>
#include <iomanip>

using namespace std;

#define MAXSIZE 1001

int main()
{
  int N,D;
  /*
    mooncake[0]: tons
    mooncake[1]: price
    mooncake[2]: price/tons
  */
  double mooncake[MAXSIZE][3];
  double total = 0;

  cin>>N>>D;
  for(int i = 0; i < N; i++)
    {
      cin>>mooncake[i][0];
    }
  for(int i = 0; i < N; i++)
    {
      cin>>mooncake[i][1];
      mooncake[i][2] = mooncake[i][1] / mooncake[i][0];
    }

  for(int i = 0; i < N; i++)
    {
      for(int j = i + 1; j < N; j++)
        {
          if(mooncake[i][2] < mooncake[j][2])
            {
              swap(mooncake[i][0],mooncake[j][0]);
              swap(mooncake[i][1],mooncake[j][1]);
              swap(mooncake[i][2],mooncake[j][2]);
            }
        }
    }

  int cursor = 0;
  while(D && cursor < N)
    {
      if(mooncake[cursor][0] < D)
        {
          total += mooncake[cursor][1];
          D -= mooncake[cursor][0];
        }
      else if(mooncake[cursor][0] > D)
        {
          total += mooncake[cursor][2] * D;
          D = 0;
        }
      cursor++;
    }

  cout<<setprecision(2)<<fixed<<total;

  return 0;
}
