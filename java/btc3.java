import java.util.Scanner;
public class btc3{
	public static float[] enterArray(){
		Scanner kb = new Scanner(System.in);
		int n;
		do{
			System.out.println("Enter the number of elements: ");
			n = kb.nextInt();
		}while(n <= 0);
		float[] A = null;
		A = new float[n];
		for(int i = 0; i < n; i++){
			System.out.print("A["+i+"]=");
			A[i] = kb.nextFloat();
			//System.println.out("");
		}
		return A;
	}
	public static void printArray(float[] arr){
		for(int i = 0; i < arr.length; i++){
			System.out.println("A[" + i + "]=" + arr[i]);
		}
	}
	public static float findMaxInArray(float[] arr){
		float max = arr[0];
		for(int i = 1; i < arr.length; i++){
			if(max < arr[i]) max = arr[i];
		}
		return max;
	}
	public static float sumArray(float[] arr){
		float sum = 0;
		for(int i = 0; i < arr.length; i++){
			sum += arr[i];
		}
		return sum;
	}
	
	public static void main(String args[]){
		float[] arr = null;
		float maxInArr;
		float sumInArr;
		arr = enterArray();

		printArray(arr);
		maxInArr = findMaxInArray(arr);
		sumInArr = sumArray(arr);
		System.out.println("Max value in array is: " + maxInArr);
		System.out.println("Sum in array: " + sumInArr);
	}
}