#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	queue<int> q;

	// ť�� 1���� N������ ���ڸ� ����
	for (int i = 1; i <= N; ++i) {
		q.push(i);
	}

	cout << "<";

	while (!q.empty()) {
		for (int i = 1; i < K; i++) {
			// K��° ������ ���ڸ� ť�� �ڷ� �ű�
			q.push(q.front());
			q.pop();
		}

		// K��° ���ڸ� ����ϰ� ť���� ����
		cout << q.front();
		q.pop();

		// ���� ���ڰ� ������ "," ���
		if (!q.empty()) {
			cout << ", ";
		}
	}

	cout << ">" << endl;

	return 0;
}
