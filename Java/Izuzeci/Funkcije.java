package izuzeci;

import java.util.Scanner;

public class Funkcije {
	public static void f2() throws NeZnasJavu,IzretardiraoSi{
		Scanner skener = new Scanner(System.in);
		int x = skener.nextInt();
		skener.close();
		if (x==0) throw new NeZnasJavu();
		if (x<0) throw new IzretardiraoSi();
	}
	public static void f1() throws NeZnasJavu,IzretardiraoSi{
		try {
			f2();
		} catch (NeZnasJavu e){
			System.out.println("Ne znas javu bravo.");
		}
	}
}
