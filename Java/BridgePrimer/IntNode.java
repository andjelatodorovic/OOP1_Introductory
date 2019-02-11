
public class IntNode extends Node<Integer> {
	public IntNode(Integer _data){
		super(_data);
	}
	public void setData(Integer _data){
		System.out.println("MyNode.setData");
		super.setData(_data);
	}
}
