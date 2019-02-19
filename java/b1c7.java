import java.util.Scanner;
public class b1c7{
	public static String enterName(){
		Scanner kb = new Scanner(System.in);
		String str;
		do{
			System.out.println("Enter name: ");
			str = kb.nextLine();
		}while(str.length() <= 0);
		return str;
	}
	public static String getName(String str){
		String[] arrFullName = str.split(" ");
		return arrFullName[arrFullName.length - 1];
	}
	public static void main(String arr[]){
		String strFullName;
		String strName;
		strFullName = enterName();
		strName 	= getName(strFullName);
		System.out.println("Your full name you typed: " + strFullName);
		System.out.println("Get name: " + strName);
	}
}