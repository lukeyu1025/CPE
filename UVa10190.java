import java.util.Scanner;

class  main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
	        int a, b, temp, ans;
	        temp = 0;
	        int[] num = new int[100];
            a = sc.nextInt();
            b = sc.nextInt();
            num[0] = a;
            while (a!=0&&b!=0&&num[temp] != 0 && temp != 99) {
                if (num[temp] % b != 0 && num[temp] != 1) {
                    temp = 99;
                } else {
                    temp++;
                    num[temp] = num[temp - 1] / b;
                }
            }
            if (temp == 99||temp==0) {
                System.out.println("Boring!");
            } else {
            	for (int i = 0; i < temp - 1; i++) {
                    System.out.print(num[i] + " ");
                }
                System.out.print(num[temp - 1] + "\r\n");
            } 
            
        }
    }
}
