import java.util.Scanner;
public class Main {
	static public void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int l = Integer.parseInt(scanner.next());
		int a = Integer.parseInt(scanner.next());
		int b = Integer.parseInt(scanner.next());
		int c = Integer.parseInt(scanner.next());
		int d = Integer.parseInt(scanner.next());
		
		int ca = a/c; int cb = b/d;
		a-=ca*c; ca += (a>0 ? 1 : 0);
		b-=cb*d; cb += (b>0 ? 1 : 0);
		
		int res = (ca>cb ? l-ca : l-cb);
		System.out.println(res);
	}
}