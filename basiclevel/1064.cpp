#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int N,a,friend_num[5001],cnt_friend=0,j=0,b[5001];

  cin>>N;

  for(int i = 0; i < 5001; i++)
     friend_num[i] = b[i] = 0;

  for(int i = 0; i < N; i++) {
    cin>>a;

    while(a) {
      friend_num[cnt_friend] += (a % 10);
      a /= 10;
    }
    cnt_friend++;
  }

  sort(friend_num,friend_num+cnt_friend);

  for(int i = 0; i < cnt_friend; i++) {
    int cnt = 1;
    while(friend_num[i] == friend_num[i+cnt]) cnt++;
    if(cnt != 1) {
      b[j] = friend_num[i];
      j++;
      i += cnt - 1;
    }
    else {
      b[j] = friend_num[i];
      j++;
    }
  }

  cout<<j<<endl;;
  for(int i = 0; i < j; i++) {
    cout<<b[i];
    if(i+1 != j) cout<<" ";
  }


  return 0;
}
