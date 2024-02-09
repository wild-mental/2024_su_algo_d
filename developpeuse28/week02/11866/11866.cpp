#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	queue<int> q;

	// 큐에 1부터 N까지의 숫자를 넣음
	for (int i = 1; i <= N; ++i) {
		q.push(i);
	}

	cout << "<";

	while (!q.empty()) {
		for (int i = 1; i < K; i++) {
			// K번째 이전의 숫자를 큐의 뒤로 옮김
			q.push(q.front());
			q.pop();
		}

		// K번째 숫자를 출력하고 큐에서 제거
		cout << q.front();
		q.pop();

		// 남은 숫자가 있으면 "," 출력
		if (!q.empty()) {
			cout << ", ";
		}
	}

	cout << ">" << endl;

	return 0;
}
