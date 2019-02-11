package queens;

public interface InterfejsB {
	double x = 4;
	static public void F(){
		System.out.println("B static F");
	}
	default public void F1(){
		System.out.println("B F1");
	}
}
