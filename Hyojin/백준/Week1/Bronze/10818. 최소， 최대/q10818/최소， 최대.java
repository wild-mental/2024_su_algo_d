package q10818;

import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        ArrayList<Integer> arr = new ArrayList<>(x);
        for(int i = 0; i<x;i++){
            arr.add(scanner.nextInt());
        }
        Collections.sort(arr);
        System.out.printf("%d %d", arr.get(0), arr.get(x-1));
    }
}