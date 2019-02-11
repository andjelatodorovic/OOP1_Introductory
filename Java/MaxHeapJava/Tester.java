package maxheapjava;

public class Tester {

	public static void main(String[] args) {
		Integer a[] = new Integer[10];
		a[0] = 10;
		a[1] = 5;
		a[2] = 12;
		a[3] = 3;
		a[4] = 2;
		a[5] = 1;
		a[6] = 8;
		a[7] = 7;
		a[8] = 9;
		a[9] = 4;
		MaxHeap<Integer> inst = new MaxHeap<>(a,10,64);
		inst.stampajSve();
	}

}
