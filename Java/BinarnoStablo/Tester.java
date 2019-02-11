package binarnoStablo;

public class Tester {
	public static void main(String args[]){
		Stablo<Integer> drvo = new Stablo<>();
		drvo.insert(2);
		drvo.insert(4);
		drvo.insert(1);
		drvo.insert(3);
		Comparable ar[] = drvo.getAll();
		System.out.println(ar.length);
		for (int i=0; i<ar.length; i++) System.out.println((Integer)ar[i]);
		
	}
}
