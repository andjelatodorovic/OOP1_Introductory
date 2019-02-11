package binarnoStablo;

public class Stablo<T extends Comparable<T>> {
	
	private class Cvor{
		public Cvor left,right;
		public T podatak;
		
		public Cvor(T x){
			podatak = x;
			left = null;
			right = null;
		}
	}
	
	private Cvor koren;
	
	public Stablo(){ //kreira prazno stablo
		koren = null;
	}
	
	public Stablo(T x){
		koren = new Cvor(x);
	}
	
	public void insert(T x){
		if (koren==null){
			koren = new Cvor(x);
			return;
		}
		Cvor trenutni = koren;
		while (true){
			if (trenutni.podatak.compareTo(x) == 0){
				return;
			}
			if (trenutni.podatak.compareTo(x) > 0){
				if (trenutni.left != null){
					trenutni = trenutni.left;
				} else {
					trenutni.left = new Cvor(x);
					return;
				}				
			} else {
				if (trenutni.right != null){
					trenutni = trenutni.right;
				} else {
					trenutni.right = new Cvor(x);
					return;
				}	
			}
		}
	}
	
	private T[] getAll(Cvor nd){
		if (nd==null) return (T[])new Comparable[0];
		T levi[] = getAll(nd.left);
		T desni[] = getAll(nd.right);
		T ret[] = (T[]) new Comparable[levi.length+desni.length+1];
		for (int i=0; i<levi.length; i++) ret[i] = levi[i];
		ret[levi.length] = nd.podatak;
		for (int i=0; i<desni.length; i++) ret[i+levi.length+1] = desni[i];
		return ret;
	}
	
	public T[] getAll(){
		return getAll(koren);
	}	
	
}
