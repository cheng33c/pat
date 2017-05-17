#include <iostream>
using namespace std;

int main()
{
	int N, a[10001], sum=0, max_sum=0;
	int left=0, max_left, max_right;
	int flag=0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		if (a[i] >= 0) flag=1;
		sum += a[i];
		if (sum > max_sum) {
			max_sum = sum;
			max_left = left;
			max_right = i;
		}
		if (sum < 0) { 
			sum = 0; 
			left = i + 1;
		}
	}

	cout << max_sum << " ";
	if (max_sum == 0 && !flag)
		cout << a[0] << " " << a[N-1];
	else if(max_sum==0 && flag) cout << 0 << " " << 0;
	else cout << a[max_left] << " " << a[max_right];

	return 0;
}
