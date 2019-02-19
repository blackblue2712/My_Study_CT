import java.util.Scanner;

public class PhanSo{
    private int tuso;
    private int mauso;

    public PhanSo(){
        this.tuso = tuso;
        this.mauso = mauso;
    }

    public PhanSo(int tu, int mau){
        this.tuso = tu;
        this.mauso = mau;
    }

    public void nhap(){
        Scanner kb = new Scanner(System.in);
        while(this.mauso == 0){
            System.out.println("Nhap tu so: ");
            this.tuso = kb.nextInt();
            System.out.println("Nhap mau so (khac 0): ");
            this.mauso = kb.nextInt();
        }
    }

    public int getTS(){
        return this.tuso;
    }
    public int getMS(){
        return this.mauso;
    }

    public void hienThi(){
        if(this.tuso == 0){
            System.out.println(0);
        }else if(this.mauso == 1){
            System.out.println(this.tuso);
        }else if(this.mauso == -1){
            System.out.println(-this.tuso);
        }else if(this.mauso < 0){
            System.out.println(-this.tuso + "/" + -this.mauso);
        }else{
            System.out.println(this.tuso + "/" + this.mauso);
        }
    }

    public void nghicDao(){
        int tmp;
        tmp = this.tuso;
        this.tuso = this.mauso;
        this.mauso = tmp;
    }

    public PhanSo giaTriNghicDao(){
        return new PhanSo(this.mauso, this.tuso);
    }

    public double getValue(){
        return (double)this.tuso/this.mauso;
    }

    public boolean lonHon(PhanSo a){
        return this.getValue() > a.getValue();
    }

    public PhanSo cong(PhanSo a){
        PhanSo result = new PhanSo();
        result.tuso     = this.tuso * a.mauso + a.tuso * this.mauso;
        result.mauso    = this.mauso *  a.mauso;
        return result;
    }

    public PhanSo tru(PhanSo a){
        PhanSo result = new PhanSo();
        result.tuso     = this.tuso * a.mauso - a.tuso * this.mauso;
        result.mauso    = this.mauso *  a.mauso;
        return result;
    }

    public PhanSo nhan(PhanSo a){
        PhanSo result = new PhanSo();
        result.tuso     = this.tuso * a.tuso;
        result.mauso    = this.mauso *  a.mauso;
        return result;
    }

    public PhanSo chia(PhanSo a){
        PhanSo result = new PhanSo();
        result.tuso     = this.tuso * a.mauso;
        result.mauso    = this.mauso *  a.tuso;
        return result;
    }

    public static PhanSo findMax(PhanSo[] a){
        PhanSo max = a[0];
        for(int i = 1; i < a.length; i++){
            if(a[i].getValue() >  max.getValue()){
                max = a[i];
            }
        }
        return max;
        
    }

    public static void sort(PhanSo[] a){
        PhanSo temp = new PhanSo();
        for(int i = 0; i < a.length; i++){
            for(int j = i+1; j < a.length; j++){
                if(a[i].getValue() > a[j].getValue()){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }



}