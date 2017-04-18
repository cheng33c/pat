#include <iostream>
#include <cmath>

using namespace std;


int main()
{
  int N,G;
  char C;

  cin>>N>>C;

  G = round(double(N)/2);

  for(int i = 1; i <= G; i++)
    {
      if(i == G || i == 1)
        {
          for(int j = 1; j <= N; j++)
            cout<<C;
        }
      else
        {
          cout<<C;
          for(int k = 1; k <= N-2; k++)
            cout<<" ";
          cout<<C;
        }


      if(i != N) cout<<endl;
    }

  return 0;
}
