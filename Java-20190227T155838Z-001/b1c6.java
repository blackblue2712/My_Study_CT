import java.util.Scanner;
import java.util.InputMismatchException;
public class b1c6{
	public static int enterNumber(){
		Scanner kb = new Scanner(System.in);
		int number = 0;
		while(true){
			try{
				System.out.print("Enter number: ");
				number = kb.nextInt();
			}catch(InputMismatchException e){
				System.out.println("Exception occurred, plesea enter again");
				continue;
			}
			finally{
				kb.nextLine();
			}
			return number;
		}
	}
	
public static boolean isPrimeNumber(int n){
	if(n <= 1) return false;
	int count = 0;
	for(int i = 1; i <= Math.sqrt(n); i++){
		System.out.println("enter");
		if(n % i == 0){
			count ++;
		}
	}
	if(count == 1) return true;
	else return false;
}
	
	public static void main(String[] args){
		int number = enterNumber();
		boolean flag = isPrimeNumber(number);
		if(flag == true) System.out.println(number + "is a prime number");
		else System.out.println(number + "is not a prime number");
	}
}