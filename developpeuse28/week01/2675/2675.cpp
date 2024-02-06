#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T; // 테스트 케이스의 개수 입력 받기

    for (int t = 0; t < T; ++t) {
        int R;
        string S;
        cin >> R >> S; // 반복 횟수 R과 문자열 S 입력 받기

        for (char c : S) {
            for (int i = 0; i < R; ++i) {
                cout << c; // 문자를 R번 반복하여 출력
            }
        }

        cout << endl; // 테스트 케이스의 결과 출력 후 개행
    }

    return 0;
}
