package pekedziSuSranje;

public class Tester {
	public static void main(String[] args) {
		String niz[] = new String[5];
		niz[0] = "abc";
		niz[1] = "user";
		niz[2] = "password";
		niz[3] = "kurac";
		niz[4] = "govno";
		
		System.out.println((String)AlgoritmiNadNizovima.getNajveci(niz));
	}
}
