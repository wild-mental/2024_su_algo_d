## 풀이한 문제 ⚒️
-  입력 받은 정수 배열에서 특정 정수가 존재하는지 여부를 확인하는 문제
- 알고리즘 분류: 자료 구조, 정렬, 이분 탐색

## 소요 시간 🛩️
- [X] 1시간 미만
- [ ] 1~3시간
- [ ] 3시간 이상

## 문제풀이 중점사항 🤔
```
sort(arr.begin(), arr.end()); // 입력 받은 배열을 정렬

// 이분 탐색을 통한 수 찾기
for (int i = 0; i < M; ++i) {
    int target;
    cin >> target;

    // algorithm의 binary_search 함수를 사용하여 탐색
    bool found = binary_search(arr.begin(), arr.end(), target);

    cout << found << '\n'; // 결과 출력
}
```

## 그 외 추가 리서치 🚀
- sort
```
_EXPORT_STD template <class _RanIt>
_CONSTEXPR20 void sort(const _RanIt _First, const _RanIt _Last) { // order [_First, _Last)
    _STD sort(_First, _Last, less<>{});
}
```
- binary_search
```
_EXPORT_STD template <class _FwdIt, class _Ty>
_NODISCARD _CONSTEXPR20 bool binary_search(_FwdIt _First, _FwdIt _Last, const _Ty& _Val) {
    // test if _Val equivalent to some element
    return _STD binary_search(_First, _Last, _Val, less<>{});
}
```
