package q2675;

import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCase = scanner.nextInt();
        for(int a = 0; a < testCase; a++){
            int x = scanner.nextInt();
            String[] substring = scanner.next().split("");
            for(int i = 0; i < substring.length; i++){
                for(int j = 0; j < x; j++){
                    System.out.print(substring[i]);
                }
            }
            System.out.printf("\n");
        }
    }
}