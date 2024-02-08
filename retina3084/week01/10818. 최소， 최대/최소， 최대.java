import java.util.Arrays;
import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {		
		Scanner input = new Scanner(System.in);
		int arraySize = input.nextInt();
		int[] array = new int[arraySize];
		
		for(int i=0; i<arraySize; i++) {
			array[i] = input.nextInt();
		}
		
		Arrays.sort(array);		
		System.out.printf("%d %d",array[0], array[arraySize-1]);
		
	}
}