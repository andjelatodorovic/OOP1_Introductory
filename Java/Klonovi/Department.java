package klonovi;

public class Department implements Cloneable{
	private int id;
	private String name;
	public Department(int id, String name){
		this.name = name;
		this.id = id;
	}
	@Override
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
	public int getId(){ return id; }
	public String getName(){ return name; }
	public void setId(int id){ this.id = id; }
	public void setName(String name){ this.name = name; }
}
