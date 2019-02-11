package klonovi;

public class Employee implements Cloneable{
	private int id;
	private String name;
	private Department department;
	public Employee(int id, String name, Department department){
		this.id = id;
		this.name = name;
		this.department = department;
	}
	@Override
	public Object clone() throws CloneNotSupportedException{
		Employee klonirani = (Employee)super.clone();
		klonirani.setDepartment((Department)department.clone());
		return klonirani;
	}
	public void setId(int id){ this.id = id; }
	public void setName(String name){ this.name = name; }
	public void setDepartment(Department dept){ department = dept; }
	public int getId(){ return id; }
	public String getName(){ return name; }
	public Department getDepartment(){ return department; }
}
