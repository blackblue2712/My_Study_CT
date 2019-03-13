import java.util.Scanner;
import java.util.InputMismatchException;
public class Diem{
    private int x;
    private int y;

    public Diem(){
        this.x = 0;
        this.y = 0;
    }

    public Diem(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void nhapDiem(){
        Scanner kb = new Scanner(System.in);
        while (true) {
            try{
                System.out.println("Enter x: ");
                this.x = kb.nextInt();
                System.out.println("Enter y: ");
                this.y = kb.nextInt();
                break;
            }catch(InputMismatchException e){
                System.out.println("Ban phai nhap gia tri la so nguyen");
                continue;
            }finally {
                kb.nextLine();
            }    
        }
    }

    public void hienThi(){
        System.out.println("(" + x + "," + y + ")");
    }

    public void doiDiem(int dx, int dy){
        this.x += dx;
        this.y += dy;
    }

    public int giaTriX(){
        return this.x;
    }

    public int giaTriY(){
        return this.y;
    }

    public float khoangCach(){
        return (float)Math.sqrt(this.x * this.x + this.y * this.y);
    }

    public float khoangCach(Diem d){
        return (float)Math.sqrt( Math.pow(d.x - this.x, 2) + Math.pow(d.y - this.y, 2) );
    }

    public Diem diemDoiXung(Diem d){
        return new Diem(this.y, this.x);
    }

}