package motoriTurbine;

public class Test {
	
	private double broj=10;
	
	public static Test saberi(Test a, Test b){
		Test toReturn = new Test();
		toReturn.broj += a.broj + b.broj;
		return toReturn;
	}
	
	public Test(){}
	
	public Test(double broj){
		this.broj = broj;
	}
	
	public double Get(){
		return broj;
	}
	
}
