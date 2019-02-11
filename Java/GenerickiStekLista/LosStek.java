package pekedziSuGovno;

public class LosStek<Tip> {
	private Object[] sadrzaj;
	private int visina;
	
	public LosStek(int kapacitet){
		sadrzaj = new Object[kapacitet];
		visina = 0;
	}
	
	public void push(Tip obj){
		sadrzaj[visina++] = obj;
	}
	
	public Tip pop(){
		Tip tmp = (Tip)sadrzaj[--visina];
		sadrzaj[visina] = 0;
		return tmp;
	}
}
