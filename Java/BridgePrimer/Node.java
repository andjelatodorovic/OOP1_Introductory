
public class Node<T> {
	public T data;
	public Node(T _data){
		data = _data;
	}
	public void setData(T _data){
		System.out.println("Node.setData");
		data = _data;
	}
}
