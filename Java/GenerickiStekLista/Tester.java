package pekedziSuGovno;

public class Tester {

	public static void main(String[] args) {
		//Stek<String> shtek[] = new Stek[60000];
		LosStek<String> shtek[] = new LosStek[60000];
		for (int i=0; i<60000; i++){
			//shtek[i] = new Stek<String>();
			shtek[i] = new LosStek<String>(60000);
			for (int j=0; j<60000; j++){
				shtek[i].push("Xelna");
			}
			for (int j=0; j<59999; j++){
				shtek[i].pop();
			}
			if (i==59999 || i==0) System.out.println(shtek[i].pop());
		}
		
		System.out.println(50);
	}

}
