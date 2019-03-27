import java.util.Scanner;
class SinhVienCNTT extends SinhVien {
    private String taikhoan;
    private String matkhau;
    private String email;

    public SinhVienCNTT (String id, String fullname, Date birthday, String[] hocPhan, String[] diemHocPhanmn, String taikhoan, String matkhau, String email) {
        super();
        this.taikhoan = taikhoan;
        this.matkhau = matkhau;
        this.email = email;
    }

    public SinhVienCNTT  () {
        super ();
        this.taikhoan = "guest";
        this.matkhau = "abc123@";
        this.email = "guset@example.com";
    }

    public void nhapThongTin () {
        Scanner kb = new Scanner(System.in);
        super.nhapThongTin();

        System.out.print("Nhap tai khoan: ");
        this.taikhoan = kb.nextLine();

        System.out.print("Nhap tai matkhau: ");
        this.matkhau = kb.nextLine();

        System.out.print("Nhap tai email: ");
        this.email = kb.nextLine();
    }

    public void hienThiThongTin () {
        super.hienThiThongTin();
        System.out.print("Tai khoan:" + this.taikhoan);
        System.out.print("Email:" + this.email);

    }

    public void doiMatKhau (String newpass) {
        this.matkhau = newpass;
    }
    public String getEmail () {
        return this.email;
    }
}   