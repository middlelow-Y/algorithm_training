#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	int N;
	scanf("%d", &N);
	vector<pair<int, int>> input(N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &input[i].second, &input[i].first);
	}

	sort(input.begin(), input.end());

	for (int i = 0; i < N; i++)
		printf("%d %d\n", input[i].second, input[i].first);
}