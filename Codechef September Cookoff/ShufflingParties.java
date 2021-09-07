import java.util.Scanner;

class ShufflingParties {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();
		int n, o, c;
		while (t-- > 0) {
			n = sc.nextInt();
			o = 0;
			for (int i = 0; i < n; i++) {
				c = sc.nextInt();
				if (c % 2 != 0)o++;
			}

			System.out.println(Integer.min(n - o, (n + 1) >> 1) + Integer.min(o, n >> 1));
		}

		sc.close();
	}
}