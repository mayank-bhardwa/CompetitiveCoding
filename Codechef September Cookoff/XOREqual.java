import java.util.Scanner;
import java.util.*;

class XOREqual {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Integer t = sc.nextInt();
		while (t-- > 0) {
			Integer n = sc.nextInt(), x = sc.nextInt();
			Integer A;
			HashMap<Integer, Integer> freq = new HashMap<>();

			for (int i = 0; i < n; i++) {
				A = sc.nextInt();
				if (freq.containsKey(A)) {
					freq.put(A, freq.get(A) + 1);
				} else freq.put(A, 1);
			}

			int mxFreq = 1, minOp = 0, temp, key, value;

			for (Map.Entry mp : freq.entrySet()) {
				key = (int)mp.getKey();
				key = key ^ x ;
				if (key == (int)mp.getKey())continue;
				value = (int)mp.getValue();
				temp = freq.getOrDefault(key, 0);
				if (temp + value > mxFreq) {
					mxFreq = temp + value;
					minOp = temp;
				} else if (temp + value == mxFreq) minOp = Integer.min(minOp, temp);
			}

			System.out.println(mxFreq + " " + minOp);
		}

		sc.close();
	}
}