package stek;

public class Stek<T> {
	private T[] niz;
	private int size;
	
	public Stek(){
		this(16);
	}
	
	@SuppressWarnings("unchecked")
	public Stek(int s){
		size = s;
		niz = (T[]) new Object[s]; 
	}
	
	@SuppressWarnings("unchecked")
	private void prosiri(){
		if (size == niz.length){
			T[] stari = niz;
			niz = (T[]) new Object[stari.length*2];
			for (int i=0; i<stari.length; i++) niz[i] = stari[i];			
		}
	}
	
	public void push(T d){
		prosiri();
		niz[size++] = d;
	}
	
	public T pop(){
		if (size==0) return null;
		T d = niz[--size];
		niz[size] = null; //famozno curenje memorije
		return d;		
	}	
}
