package klonovi;

public class Konstruktabilna {
	public final int x;
	
	public static final Konstruktabilna empty = new Konstruktabilna(0);
	
	public Konstruktabilna(int y) {
		System.out.println(5);
		x = y==0?5:15;
		//ne moze ovako:
		//if (y==0) x=5; else x=15;
	}
	
	public Konstruktabilna(){
		this(0);
	}
	
	void f(){
		//x = 5; //ne moze
	}
}
