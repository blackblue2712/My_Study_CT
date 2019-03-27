public class SDDiem{
    public static void main(String args[]){
        Diem a = new Diem(3, 4);
        a.hienThi();
        Diem b = new Diem();
        b.nhapDiem();
        b.hienThi();
        Diem c = b.diemDoiXung(b);
        c.hienThi();

        System.out.println("====================");
        float distance   = b.khoangCach();
        System.out.println("Khoang cach tu b den goc toa do: " + distance);
        float distanceAB = a.khoangCach(b);
        System.out.println("Khoang cach tu a den b: " + distanceAB);
    }
}