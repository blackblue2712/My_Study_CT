import java.util.Scanner;

public class B1_C3{
	
	public static int[] nhapMangA(){
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Nhap kich thuoc mang A: ");
		int n = keyboard.nextInt();
		int [] A = null;
		A = new int[n];
			
		for(int i = 0; i < n; i++){
			System.out.println("A["+i+"] = ");
			A[i] = keyboard.nextInt();
		}
		return A;
	}
	
	public static void main(String args[]){
		int [] B = null;
		B = nhapMangA();
	}
	
}
