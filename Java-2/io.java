import java.io.*;

public class io {
    public static void main (String agrs[]) {
        try {
            PrintWriter writer = new PrintWriter("./test.txt", "UTF-8");
            writer.println("The first line");
            writer.println("The second line");
            writer.close();
        } catch(FileNotFoundException e) {
            System.out.println("ERROR - " + e);
        } catch(UnsupportedEncodingException e) {
            System.out.println("ERROR - " + e); 
        }

    }
}