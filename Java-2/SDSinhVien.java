// import java.util.Scanner;
// import java.util.ArrayList;
// import java.util.Collections;
import java.util.*;
import java.io.*;

public class SDSinhVien 
{
    public static void main (String args[]) {
        Scanner kb = new Scanner(System.in);
        // SinhVien sv = new SinhVien();
        // sv.nhapThongTin();
        // sv.hienThiThongTin();
        // sv.xoaHocPhan();
        // sv.hienThiThongTin();
        // sv.trungBinh();

        ArrayList<SinhVien> array_sv = new ArrayList<SinhVien>();
        // array_sv.add(sv);
        int options = 1;
        while (options != 0) {
            System.out.println("1. Them sinh vien");
            System.out.println("2. Hien thi danh sach sinh vien theo alphabet");
            System.out.println("3. Tim kiem sinh vien theo ma so sinh vien");
            System.out.println("4. Tim kiem sinh vien co diem trung binh lon nhat");
            System.out.println("5. Tim kiem sinh vien bi canh bao hoc vu");
            System.out.println("6. Read from file");
            System.out.println("0. Exit");
            System.out.println("> ");
            options = kb.nextInt();
            switch (options)  {
                case 1: 
                    array_sv = themSinhVien(array_sv);
                    break;
                case 2:
                    hienThiDanhSachASC(array_sv);
                    break;
                case 3: 
                    findSV(array_sv);
                    break;
                case 4:
                    findMax (array_sv);
                    break;
                case 5:
                    findMin (array_sv);
                    break;
                case 6:
                    readFromFile ();
                    break;
                default:
                    break;
            }
        }

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

    public static void findSV (ArrayList<SinhVien> arr_sv) {
        Scanner kb = new Scanner(System.in);
        String idFind;
        System.out.println("Nhap ma so sinh vien can tim: ");
        idFind = kb.nextLine();
        for (SinhVien sv : arr_sv) {
            if ( Objects.equals(idFind, sv.getId()) ) {
                System.out.println("TIM THAY !!!");
                sv.hienThiTen();
            }
        }
    } 

    public static void findMax (ArrayList<SinhVien> arr_sv) {
        double max = 0;
        SinhVien sv_rs = arr_sv.get(0);
        for (SinhVien sv : arr_sv) {
            if ( sv.trungBinh() > max ) {
                max = sv.trungBinh();
                sv_rs = sv;
            }
        }
        sv_rs.hienThiTen();
    }

    public static void findMin (ArrayList<SinhVien> arr_sv) {
        ArrayList<SinhVien> arr_rs = new ArrayList<SinhVien>();
        for (SinhVien sv : arr_sv) {
            if ( sv.trungBinh() < 1 ) {
                sv.hienThiTen();
            }
        }
    }

    public static void readFromFile () {
        String strFilename = "test.txt";
        try {
            BufferedReader in = new BufferedReader(new FileReader(strFilename));
            String inLine;
            while ((inLine = in.readLine()) != null) {
                System.out.println(inLine);
            }
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}