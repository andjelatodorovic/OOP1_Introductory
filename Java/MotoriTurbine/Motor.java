package motoriTurbine;

public class Motor {
	private static int broj = 0;
	
	private String ime;
	private double zapremina;
	
	Motor(String _ime, double _zapremina){
		ime = _ime;
		zapremina = _zapremina;
		broj++;
	}
	
	Motor(Motor drugi){ //klon
		ime = new String(drugi.ime);
		zapremina = drugi.zapremina; //ovo moze zbog toga sto je double primitive
		broj++;
	}
	
	String getIme(){
		return "Motor: " + ime;
	}
	
	double getZapremina(){
		return zapremina;
	}
	
	static int getBroj(){
		return broj;
	}
	
}
