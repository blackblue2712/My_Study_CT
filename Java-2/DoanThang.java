public class DoanThang
{
    private Diem d1;    
    private Diem d2;

    public DoanThang () {
        d1 = new Diem();
        d2 = new Diem();
    }

    public DoanThang (Diem a, Diem b) {
        d1 = new Diem(a.giaTriX(), a.giaTriY());
        d2 = new Diem(b.giaTriX(), b.giaTriY());
    }

    public DoanThang (int ax, int ay, int bx, int by) {
        d1 = new Diem(ax, ay);
        d2 = new Diem(bx, by);
    }

    public void nhapToaDo () {
        System.out.println("Toa do d1: ");
        this.d1.nhapDiem();
        System.out.println("Toa do d2: ");
        this.d2.nhapDiem();
    }

    public void hienThiDauMut () {
       d1.hienThi();
       d2.hienThi();
    }

    public void tinhTienDoanThang (int dx, int dy) {
        d1.doiDiem(dx, dx);
        d2.doiDiem(dy, dy);
    }

    public double doDaiDoanThang () {
        return Math.sqrt( Math.pow(d2.giaTriX() - d1.giaTriX(), 2) + Math.pow(d2.giaTriY() - d1.giaTriY(), 2)  );
    }

    public double gocDoanThangVoiTrucHoanh () {
        return 0;
    }



}