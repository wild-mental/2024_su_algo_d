#include <iostream>
#include <cmath>
using namespace std;

// �Ҽ� �Ǻ� �Լ�
bool isPrime(int n) {
    if(n <= 1) return false; // 1 ���� �� �Ҽ��� �ƴ�

    // 2���� n�� �����ٱ��� ������ ���������� Ȯ��
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N; // �Է��� ���� ���� �Է�

    int countPrime = 0; // �Ҽ��� ������ ������ ����

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num; // �� �Է�

        if (isPrime(num)) {
            countPrime++; // �Ҽ��� ��� ���� ����
        }
    }

    cout << countPrime << endl; // �Ҽ��� ���� ���

    return 0;
}