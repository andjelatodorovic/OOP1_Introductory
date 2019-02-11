package motoriTurbine;

public class Tester {
	public static void main(String[] args){
		NebeskoTelo sunce = new NebeskoTelo("Sunce",null);
		NebeskoTelo venera= new NebeskoTelo("Venera",sunce);
		System.out.println("pre: " + venera);
		drugoIme(venera);
		System.out.println("posle: " + venera);
	}
	
	static void drugoIme(NebeskoTelo telo){
		telo.ime = "Zvezda Danica";
		telo = null;
	}
}
