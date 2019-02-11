package genericPairWildcards;

public class Tester {
	public static void main(String[] args){
		Par<Number> par = new Par<>();
		Par<Object> obj = new Par<>();
		Par<Integer> inte = new Par<>(123,345);
		
		inte.copyTo(par);
		obj.copyFrom(inte);
		
		System.out.println(obj.drugi.toString());
	}
}
