import java.util.*;
public class SDSVCNTT {
    public static void main (String agrs[]) {
        Scanner kb = new Scanner(System.in);

        ArrayList<SinhVienCNTT> array_sv = new ArrayList<SinhVienCNTT>();
        int options = 1;
        while (options != 0) {
            System.out.println("1. Them sinh vien");
            System.out.println("2. Hien thi danh sach sinh vien theo alphabet");
            System.out.println("0. Exit");
            System.out.println("> ");
            options = kb.nextInt();
            switch (options)  {
                case 1: 
                    array_sv = themSinhVien(array_sv);
                    break;
                default:
                    break;
        
            }   
        }
    }
    public static ArrayList<SinhVienCNTT> themSinhVien (ArrayList<SinhVienCNTT> array_sv) {
        Scanner kb = new Scanner(System.in);
        int indexTotalSv;
        System.out.println("Nhap so sinh vien muon them: ");
        indexTotalSv = kb.nextInt();
        for (int i = 0; i < indexTotalSv; i++) {
            SinhVienCNTT sv = new SinhVienCNTT();
            sv.nhapThongTin();
            array_sv.add(sv);
        }
        return array_sv;
    }
}
