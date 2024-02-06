#include <iostream>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N; // 정수의 개수 입력 받기

    int min_val = INT_MAX; // 최솟값을 저장할 변수, 초기값은 INT_MAX로 설정
    int max_val = INT_MIN; // 최댓값을 저장할 변수, 초기값은 INT_MIN으로 설정

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num; // 정수 입력 받기

        // 현재 입력된 값이 최솟값보다 작으면 최솟값을 갱신
        if (num < min_val) {
            min_val = num;
        }

        // 현재 입력된 값이 최댓값보다 크면 최댓값을 갱신
        if (num > max_val) {
            max_val = num;
        }
    }

    cout << min_val << " " << max_val << endl; // 최솟값과 최댓값 출력

    return 0;
}
