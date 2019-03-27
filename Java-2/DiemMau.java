import java.util.Scanner;
class DiemMau extends Diem {
    private String mau;
    
    public DiemMau (int x, int y, String mau) {
        super(x, y);
        this.mau = mau;
    }

    public void ganMau (String mau) {
        this.mau = mau;
    }

    public void nhapDiem () {
        Scanner kb = new Scanner(System.in);
        super.nhapDiem();
        System.out.print("Nhap mau diem: ");
        this.mau = kb.nextLine();
    }

    public void hienThi () {
        System.out.println("(" + super.giaTriX() + "," + super.giaTriY() + ", " + this.mau + ")");
    }
}