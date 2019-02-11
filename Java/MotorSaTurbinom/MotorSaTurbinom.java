package motorSaTurbinom;

public class MotorSaTurbinom extends Motor{
	double zamorTurbine;
	
	MotorSaTurbinom(String _naziv, double _faktorIstrosenosti
			, double _brojSatiRada, double _zamorTurbine){
		super(_naziv, _faktorIstrosenosti, _brojSatiRada);
		zamorTurbine = _zamorTurbine;	
	}
	
	public double getStepenZamoraMotora(){
		return super.getStepenZamoraMotora() + zamorTurbine;
	}
	
}
