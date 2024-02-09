#include <iostream>
#include <cmath>
using namespace std;

// 소수 판별 함수
bool isPrime(int n) {
    if(n <= 1) return false; // 1 이하 는 소수가 아님

    // 2부터 n의 제곱근까지 나누어 떨어지는지 확인
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N; // 입력할 수의 개수 입력

    int countPrime = 0; // 소수의 개수를 저장할 변수

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num; // 수 입력

        if (isPrime(num)) {
            countPrime++; // 소수인 경우 개수 증가
        }
    }

    cout << countPrime << endl; // 소수의 개수 출력

    return 0;
}