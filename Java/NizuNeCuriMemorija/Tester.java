package nizuNeCuriMemorija;

public class Tester {
	public static void main(String[] args){
		Integer niz[] = new Integer[3];
		niz[0] = 25;
		niz[1] = 250;
		niz[2] = 420;
		A lepotan = new A(niz);
		System.out.println(lepotan.getAt(0));
		System.out.println(lepotan.getAt(1));
		System.out.println(lepotan.getAt(0));
		System.out.println(lepotan.getAt(2));
		System.out.println(lepotan.niz.length);
		
	}
}
