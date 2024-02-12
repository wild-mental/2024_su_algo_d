#include <iostream>
#include <algorithm> // binary_search 함수 포함
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;

    vector<int> arr(N); // 벡터로 배열 선언

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // 이분 탐색을 위한 정렬

    cin >> M;

    for (int i = 0; i < M; ++i) {
        int target;
        cin >> target;

        // binary_search 함수를 사용하여 탐색
        bool found = binary_search(arr.begin(), arr.end(), target);

        cout << found << '\n'; // 결과 출력
    }

    return 0;
}