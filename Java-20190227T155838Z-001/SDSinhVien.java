import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
public class SDSinhVien 
{
    public static void main (String args[]) {
        Scanner kb = new Scanner(System.in);
        SinhVien sv = new SinhVien();
        sv.nhapThongTin();
        sv.hienThiThongTin();
        // sv.xoaHocPhan();
        // sv.hienThiThongTin();
        sv.trungBinh();

        ArrayList<SinhVien> array_sv = new ArrayList<SinhVien>();
        int options = 1;
        // while (options != 0) {
        //     System.out.println("1. Them sinh vien");
        //     System.out.println("2. Hien thi danh sach sinh vien theo alphabet");
        //     System.out.println("> ");
        //     options = kb.nextInt();
        //     switch (options)  {
        //         case 1: 
        //             array_sv = themSinhVien(array_sv);
        //             break;
        //         case 2:
        //             hienThiDanhSachASC(array_sv);
        //             break;
        //     }
        // }

    }

    public static ArrayList<SinhVien> themSinhVien (ArrayList<SinhVien> array_sv) {
        Scanner kb = new Scanner(System.in);
        int indexTotalSv;
        System.out.println("Nhap so sinh vien muon them: ");
        indexTotalSv = kb.nextInt();
        for (int i = 0; i < indexTotalSv; i++) {
            SinhVien sv = new SinhVien();
            sv.nhapThongTin();
            array_sv.add(sv);
        }
        return array_sv;
    }

    public static void hienThiDanhSachASC (ArrayList<SinhVien> arr_sv) {
        ArrayList<String> collectionsName = new ArrayList<String>();
        for (SinhVien sv : arr_sv) {
            String str = sv.getName();;
            String[] svName = str.split(" ");
            collectionsName.add(svName[svName.length-1]);
        }
        Collections.sort(collectionsName);
        for (String name : collectionsName) {
            System.out.print( name + ", " );
        }
        System.out.println();
        System.out.println("===========================");
    }
}