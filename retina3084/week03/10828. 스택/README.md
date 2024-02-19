\## 풀이한 문제 ⚒️
- Stack의 가장 기본적인 문제로 보인다.이 문제의 원래 목적은 Stack자료구조를 직접 구현하는 것 이겠지만, 나는 jdk library에서 기본적으로 제공하는 stack 자료구조를 사용하였다.

## 소요 시간 🛩️
- [ ] 1시간 미만
- [X] 1~3시간
- [ ] 3시간 이상

## 문제풀이 중점사항 🤔
- 시간초과
```
당연히 처음에는 입력과 출력에 Scanner와 println을 사용하여
문제를 쉽게 해결하였지만, 시간초과로 제출이 되지않아서 실패하였다.
시간을 줄이기 위한 방법을 검색하였고 println외,
다음과같은 입출력 관련 키워드들을 알아내었다.
1. StringBuffer
2. StringBuilder
3. BufferWriter
이 중, BufferWriter가 가장 빠른속도라고 들어보긴 하였지만,
일단 좀 더 기초적으로 보이는 StringBuilder가 무엇인지 공부해보았다.
(StringBuilder와 StringBuffer는 동기화 여부를 빼고는 같다고 한다.)
```

## 그 외 추가 리서치 🚀
- 시간초과 코드 : http://colorscripter.com/s/mhLvbkw

