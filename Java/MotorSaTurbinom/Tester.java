package motorSaTurbinom;

public class Tester {
	public static void main(String[] args){
		Motor vibrator = new Motor("Vibrator v2.0", 40, 2);
		MotorSaTurbinom dildo = new MotorSaTurbinom("Dildo 5000", 30, 2, 25);
		
		System.out.println(vibrator.compareTo(dildo));
		System.out.println(dildo.compareTo(vibrator));
	}
}
