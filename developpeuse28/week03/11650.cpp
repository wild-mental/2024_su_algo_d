#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// �� ����ü ����
struct Point {
    int x, y;
};

// �� �Լ� ����
bool compare(Point a, Point b) {
    if (a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

int main() {
    int N;
    cin >> N;

    // ���� ������ ���� ����
    vector<Point> points(N);

    // �� �Է� �ޱ�
    for (int i = 0; i < N; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    // ����
    sort(points.begin(), points.end(), compare);

    // ���ĵ� �� ���
    for (int i = 0; i < N; ++i) {
        cout << points[i].x << ' ' << points[i].y << '\n';
    }

    return 0;
}
