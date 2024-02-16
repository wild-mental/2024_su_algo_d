#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 점 구조체 정의
struct Point {
    int x, y;
};

// 비교 함수 정의
bool compare(Point a, Point b) {
    if (a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

int main() {
    int N;
    cin >> N;

    // 점을 저장할 벡터 선언
    vector<Point> points(N);

    // 점 입력 받기
    for (int i = 0; i < N; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    // 정렬
    sort(points.begin(), points.end(), compare);

    // 정렬된 점 출력
    for (int i = 0; i < N; ++i) {
        cout << points[i].x << ' ' << points[i].y << '\n';
    }

    return 0;
}
