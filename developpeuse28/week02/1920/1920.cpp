#include <iostream>
#include <algorithm> // binary_search �Լ� ����
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;

    vector<int> arr(N); // ���ͷ� �迭 ����

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // �̺� Ž���� ���� ����

    cin >> M;

    for (int i = 0; i < M; ++i) {
        int target;
        cin >> target;

        // binary_search �Լ��� ����Ͽ� Ž��
        bool found = binary_search(arr.begin(), arr.end(), target);

        cout << found << '\n'; // ��� ���
    }

    return 0;
}