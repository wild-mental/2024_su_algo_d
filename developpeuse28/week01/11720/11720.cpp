#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; // 숫자의 개수 입력 받기

    string numbers;
    cin >> numbers; // 숫자들 입력 받기

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += numbers[i] - '0'; // 각 자리의 숫자를 더하기
    }

    cout << sum << endl; // 결과 출력

    return 0;
}
