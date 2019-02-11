package queens;

public interface InterfejsA {
	public static double x = 3;
	public static void F(){
		System.out.println("A static F");
	}
	default public void F1(){
		//double y = this.x;
		System.out.println("A F1");
	}
}
