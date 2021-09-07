import java.util.Scanner;

class AirlineRestrictions {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int[] arr = new int[5];
		while (t-- > 0) {
			for (int i = 0; i < 5; i++)
				arr[i] = sc.nextInt();

			if(arr[0]+arr[1] <= arr[3] && arr[2]<= arr[4])System.out.println("Yes");
			else if(arr[0]+arr[2] <= arr[3] && arr[1]<=arr[4])System.out.println("Yes");
			else if(arr[1]+arr[2] <= arr[3] && arr[0]<=arr[4])System.out.println("Yes");
			else System.out.println("No");
		}
		sc.close();
	}
}