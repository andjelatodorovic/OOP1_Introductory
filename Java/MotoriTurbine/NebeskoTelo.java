package motoriTurbine;

public class NebeskoTelo {
	
	long id;
	String ime = "Neimenovano";
	NebeskoTelo kruziOko = null;
	private static long sledeciID = 0;
	
	NebeskoTelo(){
		id = sledeciID++;
	}
	
	NebeskoTelo(String ime, NebeskoTelo kruziOko){
		this();
		this.ime = ime;
		this.kruziOko = kruziOko;
	}
	
	public String toString(){
		String opis = id + " (" + ime + ")";
		if (kruziOko != null) opis += " centar rotacije: " + kruziOko;
		return opis;
	}
	
	
}
