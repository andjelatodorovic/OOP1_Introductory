package motorSaTurbinom;

public class Motor implements Comparable<Motor> {
	String naziv;
	double faktorIstrosenosti,brojSatiRada;
	
	Motor(String _naziv, double _faktorIstrosenosti, double _brojSatiRada){
		naziv = _naziv;
		faktorIstrosenosti = _faktorIstrosenosti;
		brojSatiRada = _brojSatiRada;		
	}
	
	public String getNaziv(){
		return naziv;
	}
	
	public double getStepenZamoraMotora(){
		return faktorIstrosenosti * brojSatiRada;
	}
	
	public int compareTo(Motor arg0) {
		double r = getStepenZamoraMotora() - arg0.getStepenZamoraMotora();
		if (r<0) return -1; else
		if (r>0) return 1; else return 0;
	}
}
