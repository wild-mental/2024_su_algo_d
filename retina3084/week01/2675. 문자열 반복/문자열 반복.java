import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int count = input.nextInt();
		int[] repeat = new int[count];
		String[] strArr = new String[count];

		for (int i=0; i<strArr.length; i++) {
			repeat[i] = input.nextInt();
			strArr[i] = input.next();
		}
		for (int i=0; i<strArr.length; i++) {
			for (int j=0; j<strArr[i].length(); j++) {
				for (int k=0; k<repeat[i]; k++) {
					System.out.print(strArr[i].charAt(j));
				}
			}
			System.out.println();
		}
	}
}