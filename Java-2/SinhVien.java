import java.util.ArrayList;
import java.util.Scanner;
import java.util.InputMismatchException;
// // import java.util.Date;
// // import java.util.*;
// import java.text.DateFormat;
// import java.text.SimpleDateFormat;

public class SinhVien 
{
    private String maSoSinhVien;
    private String hoTen;
    private Date ngaySinh;
    private int soHocPhanDangKi = 0;
    private ArrayList<String> hocPhan;
    private ArrayList<String> diemHocPhan;

    public static final double F = 0;
    public static final double A = 4;
    public static final double B = 3;
    public static final double Bp = 3.5;
    public static final double C = 2;
    public static final double Cp = 2.5;
    public static final double D = 1;
    public static final double Dp = 1.5;


    public SinhVien () {
        maSoSinhVien = "B170629";
        hoTen = "Dang Huu Nghia";
        ngaySinh = new Date(1999, 12, 27);
        hocPhan = new ArrayList<String>();
        diemHocPhan = new ArrayList<String>();
        // hocPhan.add("Object oriented programming");
        soHocPhanDangKi = hocPhan.size();
        // diemHocPhan.add(null);
    }

    public SinhVien (String id, String fullname, Date birthday, String[] hocPhan, String[] diemHocPhan) {
        this.maSoSinhVien = id;
        this.hoTen = fullname;
        this.ngaySinh = birthday;
        if (hocPhan.length > 0) {
            for (String hp : hocPhan) {
                this.hocPhan.add(hp);
            }
        }
        
        if (diemHocPhan.length > 0) {
            for (String score : diemHocPhan) {
                this.diemHocPhan.add(score);
            }
        }
        this.soHocPhanDangKi = this.hocPhan.size();
    }

    public void nhapThongTin () {
        Scanner kb = new Scanner (System.in);
        int day = 1;
        int month = 1;
        int year = 1970;

        System.out.print("Nhap ma so sinh vien: ");
        this.maSoSinhVien = kb.nextLine();
        System.out.print("Nhap ho ten sinh vien: ");
        this.hoTen = kb.nextLine();

        System.out.print("Nhap nam sinh: ");
        year = kb.nextInt();

        System.out.print("Nhap thang sinh: ");
        month = kb.nextInt();

        System.out.print("Nhap ngay sinh: ");
        day = kb.nextInt();
        
        // this.ngaySinh = new Date (year, month, day);
        this.ngaySinh = new Date(year, month, day);
        System.out.print("Nhap so hoc phan dang ky: ");
        this.soHocPhanDangKi = kb.nextInt();
        kb.nextLine();
        for (int i = 0; i < this.soHocPhanDangKi; i++) {
            System.out.print("Nhap mon thu " + (i+1) + ": ");
            String hp = kb.nextLine();
            this.hocPhan.add(hp);
        }

        for (int i = 0; i < this.soHocPhanDangKi; i++) {
            System.out.print("Nhap diem mon thu " + (i+1) + ": ");
            this.diemHocPhan.add(kb.nextLine());
        }
    }

    public void hienThiThongTin () {
        Date formatter = new Date();
        System.out.println("Id: " + this.maSoSinhVien);
        System.out.println("Hoten: " + this.hoTen);
        System.out.println("Ngay sinh: " + ngaySinh.showDate(ngaySinh));
        System.out.println("So hoc phan da dang ky: " + this.soHocPhanDangKi);
        String hps = "{";
        for(int i = 0; i < soHocPhanDangKi; i++) {
            hps += " " + this.hocPhan.get(i) + ":" + this.diemHocPhan.get(i) + ",";
        }
        hps += "}";
        System.out.println("Hoc phan va diem: " + hps);
    }

    public void dangKiHocPhan () {
        Scanner kb = new Scanner (System.in);
        System.out.print("Nhap ten mon: ");
        this.hocPhan.add(kb.nextLine());
        System.out.print("Nhap diem: ");
        this.diemHocPhan.add(kb.nextLine());
        this.soHocPhanDangKi += 1;
    }

    public  void xoaHocPhan () {
        Scanner kb = new Scanner (System.in);
        int indexDel;
        String hps = "{";
        for(int i = 0; i < soHocPhanDangKi; i++) {
            hps += (i+1) + ". " + this.hocPhan.get(i) + ":" + this.diemHocPhan.get(i) + ",";
        }
        hps += "}";
        System.out.println("Tat ca cac hoc phan cua ban: " + hps);

        System.out.println("Chon hoc phan ban muon xoa: ");
        indexDel = kb.nextInt();
        hocPhan.remove(indexDel-1);
        diemHocPhan.remove(indexDel-1);
        soHocPhanDangKi -= 1;
    }

    public String getName () {
        return this.hoTen;
    }

    public String getId() {
        return this.maSoSinhVien;
    }

    public void hienThiTen () {
        System.out.println("Ten: " + this.hoTen);
    }

    public double trungBinh () {
        double sum = 0;
        for (String score : this.diemHocPhan) {
            switch (score) {
                case "F":
                    sum += F;
                    break;
                case "D+":
                    sum += Dp;
                    break; 
                case "D":
                    sum += D;
                    break; 
                case "C":
                    sum += C;
                    break; 
                case "C+":
                    sum += Cp;
                    break; 
                case "B":
                    sum += B;
                    break; 
                case "B+":
                    sum += Bp;
                    break; 
                case "A":
                    sum += A;
                    break; 
                default:
                    sum+= Integer.parseInt(score);
                    break;
            }
        }
        System.out.println("Diem trung binh: " + sum/this.diemHocPhan.size());
        return sum/this.diemHocPhan.size();
    }
}