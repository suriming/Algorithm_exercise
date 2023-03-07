#include <vector>
#include <iostream>
#include <cmath> 
#include <algorithm>
#include <climits>

using namespace std;
int n, max_weight, rope_num;

bool comp(int r1, int r2)
{
	return (r2 < r1);
}
int	main(int argc, char **argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	vector <int> ropes (n + 1, 0);
	for (int i = 0; i < n; ++i) {
		int weight;
		cin >> weight;
		ropes[i] = weight;
	}
	sort(ropes.begin(), ropes.end(), comp);
	rope_num = 0;
	for (int i = 0; i < n; i++)
	{
		int temp_max = ropes[i] * (i + 1);
		if (temp_max > max_weight)
		{
			max_weight = temp_max;
			rope_num = rope_num + 1;
		}
		else
			break ;
		//cout << "max_weight = " << max_weight << endl;
	}
	cout << max_weight;

	return (0);
}
