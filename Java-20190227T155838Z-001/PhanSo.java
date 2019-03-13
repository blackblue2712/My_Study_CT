import java.util.Scanner;
import java.util.InputMismatchException;
public class PhanSo{
    private int tuso;
    private int mauso;

    public PhanSo(){
        this.tuso = 1;
        this.mauso = 1;
    }

    public PhanSo(int tu, int mau){
        this.tuso = tu;
        this.mauso = mau;
    }

    public void nhap(){
        Scanner kb = new Scanner(System.in);
		while(true){
			try{
				System.out.println("Nhap tu so: ");
				this.tuso = kb.nextInt();
				System.out.println("Nhap mau so (khac 0): ");
				this.mauso = kb.nextInt();
			}catch(InputMismatchException e){
				System.out.println("Ban phai nhap gia tri la so nguyen");
				continue;
			}finally{
				kb.nextLine();
			}
            if(this.mauso != 0){
                break;
            }
		}
    }
    
    public int ucln(int a, int b){
        if(b == 0) return a;
        return ucln(b, a % b);
    }

    public void hienThi(){
        int uc = ucln(this.tuso, this.mauso);
        this.tuso = this.tuso/uc;
        this.mauso = this.mauso/uc;
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

    public void nghichDao(){
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