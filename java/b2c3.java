import java.util.Scanner;
public class b2c3{
    public static void main(String args[]){
        // PhanSo a = new PhanSo();
        // PhanSo a = new PhanSo(3, 7);

        // PhanSo a = new PhanSo(1,2);
        // PhanSo b = new PhanSo(1,2);

        // PhanSo c = new PhanSo();
        // c = a.cong(b);

        // c.hienThi();
        // PhanSo a = a.giaTriNghicDao();
        // a.hienThi();
        // b.hienThi();
        // a.nhap();
        // a.hienThi();

        PhanSo[] arr_ps;
        PhanSo a = new PhanSo();
        arr_ps = nhapNPhanSo();
        PhanSo sum_ps = arr_ps[0];

        System.out.println("==============Result==============");
        for(int i = 0; i < arr_ps.length; i++){
            arr_ps[i].hienThi();
        }

        System.out.println("Tong cac phan so: ");
        for(int i = 1; i < arr_ps.length; i++){
            sum_ps = sum_ps.cong(arr_ps[i]);
        }
        sum_ps.hienThi();

        // find max
        a = PhanSo.findMax(arr_ps);
        System.out.println("Phan so lon nhat: ");
        a.hienThi();

        System.out.println("Sap xep tang dan: ");
        PhanSo.sort(arr_ps);
        for(int i = 0; i < arr_ps.length; i++){
            arr_ps[i].hienThi();
        }

    }

    public static PhanSo[] nhapNPhanSo(){
        int n = 0;
        Scanner kb = new Scanner(System.in);
        while(n <= 1){
            System.out.println("Nhập n (n > 1): ");
            n = kb.nextInt();
        }
        PhanSo arr_ps[] = new PhanSo[n];
        for(int i = 0; i < n; i++){
            PhanSo tmp = new PhanSo();
            System.out.println("Nhap phan so thu " + (i+1) + ": ");
            tmp.nhap();

            arr_ps[i] = tmp;
        }
        return arr_ps;
    }

    
}