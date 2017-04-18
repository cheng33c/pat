#include <iostream>
using namespace std;

#define standard_y 2014
#define standard_m 9
#define standard_d 6


/*
  0: a older
  1: a younger
*/
bool compare_date(int *a,int *b)
{
  for(int i = 0; i < 3; i++) {
    if(a[i] == b[i]) continue;
    if(a[i] < b[i]) return 0;
    return 1;
  }
}

bool islegal(int y, int m, int d)
{
  if(y>standard_y || (y==standard_y && m>standard_m) ||
     (y==standard_y && m==standard_m && d>standard_d))
    return 0;
  if(standard_y-y>200 ||
     (standard_y-y==200 && m<standard_m) ||
     (standard_y-y==200 && standard_m==m && d<standard_d))
    return 0;
  return 1;
}

int main()
{
  int N, cnt_legal=0;
  int old[3] = {9999,9999,9999}, young[3]{-1,-1,-1};
  string old_name, young_name;

  cin>>N;
  for( int i = 0; i < N; i++ ) {
    string name,birth;
    cin >> name >> birth;
    int y, m, d;
    y = (birth[0]-'0')*1000+(birth[1]-'0')*100+(birth[2]-'0')*10+(birth[3]-'0');
    m = (birth[5]-'0')*10+(birth[6]-'0');
    d = (birth[8]-'0')*10+(birth[9]-'0');
    if( islegal(y, m, d) ) {
      cnt_legal++;
      int birth[3] = { y, m, d };

      if(!compare_date(birth,old)) {
        old[0] = birth[0]; old[1] = birth[1];
        old[2] = birth[2];
        old_name = name;
      }
      if(compare_date(birth,young)) {
        young[0] = birth[0]; young[1] = birth[1];
        young[2] = birth[2];
        young_name = name;
      }
    }
  }
    cout<<cnt_legal;
    if(cnt_legal!=0) cout<<" "<<old_name<<" "<<young_name;

  return 0;
}
