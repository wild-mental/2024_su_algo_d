import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int answer = 0;
        String[] inputData = scanner.next().split("");
        for(int i = 0; i<x;i++){
            answer = answer + Integer.parseInt(inputData[i]);
        }
        System.out.print(answer);
    }
}