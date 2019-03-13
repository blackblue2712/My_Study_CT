import java.util.Scanner;
import java.util.InputMismatchException;
public class b1c4{
	public static int enterIntegerNumber(){
		Scanner kb = new Scanner(System.in);
		int number = 0;
		boolean flag = true;
		while (true) {
			try {
				System.out.print("Enter number: ");
				number = kb.nextInt();
			}
			catch (InputMismatchException e) {
				System.out.println("Exception occurred, please enter again");
				continue;
			}
			finally{
				kb.nextLine();
			}
			return number;
		} //while
	}
	public static int calculateSum(int n1, int n2){
		return n1+n2;
	}
	
	public static void main(String args[]){
		int number1, number2;
		number1 = enterIntegerNumber();
		number2 = enterIntegerNumber();
		System.out.print("The sum is: " + calculateSum(number1, number2));
	}
	
}