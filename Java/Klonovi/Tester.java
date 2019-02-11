package klonovi;

public class Tester {

	public static void main(String[] args) {
		Employee original = new Employee(1, "Project Manager", new Department(1,"Machine Learning"));
		Employee klonirani = null;
		try{
			klonirani = (Employee)original.clone();
		}catch(CloneNotSupportedException e){}
		
		klonirani.getDepartment().setName("Artificial Intelligence");
		System.out.println(original.getDepartment().getName());
		System.out.println(klonirani.getDepartment().getName());
		
		Test a=new Test(10), b=new Test(20);
		System.out.println(Test.Saberi(a, b).Get());
	}

}
