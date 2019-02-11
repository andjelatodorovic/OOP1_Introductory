package pekedziSuGovno;

public class Stek<Tip> {
	
	protected class Cvor<Typ>{
		Typ podatak;
		Cvor<Typ> next;
		
		Cvor(Typ _podatak, Cvor<Typ> _next){
			podatak = _podatak;
			next = _next;
		}
	}
	
	private Cvor<Tip> glava;
	
	Stek(){
		glava = null;
	}
	
	public void push(Tip stvar){
		glava = new Cvor<Tip>(stvar,glava);
	}
	
	public Tip pop(){
		Tip tmp = glava.podatak;
		glava = glava.next;
		return tmp;
	}	
}
