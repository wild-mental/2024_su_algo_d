## 풀이한 문제 ⚒️
-  원 모양으로 앉은 N명의 사람 중, 남은 사람이 없을 때까지 K번째 사람을 제거하며, 제거되는 순서를 나열하는 문제
- 알고리즘 분류: 구현, 자료 구조, 큐
## 소요 시간 🛩️
- [X] 1시간 미만
- [ ] 1~3시간
- [ ] 3시간 이상

## 문제풀이 중점사항 🤔
```
// K번째 이전의 숫자를 큐의 뒤로 옮김
for (int i = 1; i < K; i++) {
    q.push(q.front());
    q.pop();
}

// K번째 숫자를 출력하고 큐에서 제거
cout << q.front();
q.pop();
```