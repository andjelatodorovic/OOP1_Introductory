package nizuNeCuriMemorija;

public class A {
	Object[] niz;
	
	A(){
		niz = null;
	}
	
	A(Object[] drugi){
		niz = drugi;
	}
	
	Object getAt(int index){
		Object tmp = niz[index];
		niz[index] = null;
		return tmp;
	}
	
	Exception f(){return new Exception("haha");}
	
}