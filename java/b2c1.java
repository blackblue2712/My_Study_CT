public class b2c1{
    public static void main(String args[]){
        Diem a = new Diem(1, 1);
        Diem b = new Diem(2, 2);
        Diem c = new Diem(2, 2);
        c.nhapDiem();
        a.hienThi();
        // a.doiDiem(1, -1);
        // a.hienThi();

        // float distance  = a.khoangCach();
        float distances = a.khoangCach(b);
        System.out.println("Distances: " + distances);
    }
}