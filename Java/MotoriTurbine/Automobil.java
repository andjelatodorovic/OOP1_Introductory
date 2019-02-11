package motoriTurbine;

public class Automobil extends Motor implements Vozilo{

	private String boja; //boja je turska rec
	
	Automobil(String _boja, String _imeMotor, double _zapreminaMotor){
		super(_imeMotor,_zapreminaMotor);
		boja = _boja;
	}
	
	String getBoja(){
		return boja;
	}
	
	String getIme(){
		return "Automobil boja: " + boja + "; " + super.getIme();
	}
	
	public void upali() {
		System.out.println("ck ck ck brrrmmm");		
	}

	public void vozi() {
		System.out.println("vozim auto brm vrrrrm");		
	}

	public void ugasi() {
		System.out.println("gasim auto");		
	}
	
}
