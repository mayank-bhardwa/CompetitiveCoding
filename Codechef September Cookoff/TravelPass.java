import java.util.Scanner;

class TravelPass {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Integer time, n, a, b, t = sc.nextInt();
		String s;
		while (t-- > 0) {
			n = sc.nextInt();
			a = sc.nextInt();
			b = sc.nextInt();
			s = sc.next();
			time = 0;
			for (int i = 0; i < n; i++) {
				if (s.charAt(i) == '0')time += a;
				else time += b;
			}

			System.out.println(time);
		}

		sc.close();
	}
}