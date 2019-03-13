public class SDDoanThang
{
    public static void main (String agrs[]) {
        Diem p1 = new Diem(2, 1);
        Diem p2 = new Diem(6, 4);
        DoanThang dt = new DoanThang(p1, p2);
        // dt.nhapToaDo();
        dt.hienThiDauMut();
        System.out.println("Do dai doan thang: " + dt.doDaiDoanThang());

        dt.tinhTienDoanThang(3, -1);
        dt.hienThiDauMut();

        DoanThang cd = new DoanThang();
        cd.nhapToaDo();
        cd.hienThiDauMut();
        System.out.println("Do dai doan thang: " + cd.doDaiDoanThang());
    }
}

