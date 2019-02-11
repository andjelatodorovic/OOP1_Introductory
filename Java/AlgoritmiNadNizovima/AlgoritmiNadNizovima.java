package pekedziSuSranje;

public class AlgoritmiNadNizovima {
	static <T extends Comparable<T>> T getNajveci(T[] niz){
		int j=0, i;
		for (i=1; i<niz.length; i++){
			if (niz[j].compareTo(niz[i]) < 0){
				j = i;
			}
		}
		return niz[j];
	}
}
