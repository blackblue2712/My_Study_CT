import java.util.Scanner;
public class b1c8{
	public static int[] enterArray(){
		Scanner kb = new Scanner(System.in);
		int n;
		int[] arrNumber;
		do{
			System.out.println("Enter the number of element: ");
			n = kb.nextInt();
		}while(n <= 0);
		arrNumber = new int[n];
		for(int i = 0; i < n; i++){
			System.out.print("A[" + i + "] = ");
			arrNumber[i] = kb.nextInt();
		}
		return arrNumber;
	}
	public static void showArray(int[] arr){
		for(int i = 0; i < arr.length; i++){
			System.out.println("A[" + i + "] = " + arr[i]);
		}
	}
	public static void sortArrayAsc(int[] arr){
		int tmp;
		for(int i = 0; i < arr.length; i++){
			for(int j = i+1; j < arr.length; j++){
				if(arr[i] > arr[j]){
					tmp 	= arr[i];
					arr[i] 	= arr[j];
					arr[j] 	= tmp;
				}
			}
		}	
	}

	public static void countXInArray(int[] arr){
		Scanner kb = new Scanner(System.in);
		int countWhat;
		System.out.println("Count what?: ");
		countWhat = kb.nextInt();

		int count  = 0;
		for(int i = 0; i < arr.length; i++){
			if(arr[i] == countWhat) count ++;
		}
		System.out.println(count + " values in this array");
	}

	public static void main(String arr[]){
		int[] arrNumber;
		int count;
		arrNumber = enterArray();

		System.out.println("Array you typed: ");
		showArray(arrNumber);

		sortArrayAsc(arrNumber);
		System.out.println("Array after sort ascending: ");
		showArray(arrNumber);

		countXInArray(arrNumber);

	}
}