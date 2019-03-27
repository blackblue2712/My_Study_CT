import java.util.Scanner;
public class SDPhanSo{
    public static void main(String args[]){
        PhanSo a = new PhanSo(3, 7);
        PhanSo b = new PhanSo(4, 9);
        new PhanSo(0,1).hienThi();
        new PhanSo(-1,-2).hienThi();
        new PhanSo(1,-2).hienThi();
        new PhanSo(1,-1).hienThi();
        a.hienThi();
        b.hienThi();

        PhanSo x = new PhanSo();
        PhanSo y = new PhanSo();
        PhanSo z = new PhanSo();
        PhanSo sum = new PhanSo();
        System.out.println("Nhap x: ");
        x.nhap();
        System.out.println("Nhap y: ");
        y.nhap();

        z = x.giaTriNghicDao();
        sum = x.cong(y);
        System.out.println("Tong gia tri cua x va y: ");
        sum.hienThi();
      
        PhanSo[] arr_ps;
        PhanSo d = new PhanSo();
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
        d = PhanSo.findMax(arr_ps);
        System.out.println("Phan so lon nhat: ");
        d.hienThi();

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