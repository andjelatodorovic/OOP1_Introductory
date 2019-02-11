package izuzeci;

public class Tester {
	public static void main(String args[]) throws NeZnasJavu,IzretardiraoSi{
		try{
			Funkcije.f1();
		}catch(IzretardiraoSi e){
			System.out.println("Izretardirao si bravo.");
		}
	}
}
