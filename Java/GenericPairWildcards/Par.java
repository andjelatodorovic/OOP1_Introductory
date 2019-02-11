package genericPairWildcards;

public class Par<T> {
	public T prvi, drugi;
	
	public Par(){
		prvi = drugi = null;
	}
	
	public Par(T _prvi, T _drugi){
		prvi = _prvi;
		drugi = _drugi;
	}
	
	public void copyTo(Par<? super T> brat){
		brat.prvi = prvi;
		brat.drugi = drugi;
	}
	
	public void copyFrom(Par<? extends T> brat){
		prvi = brat.prvi;
		drugi = brat.drugi;
	}
	
}
