import java.util.Scanner;
class main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int N,Q;
		String[][] in=new String[100][100];
		String[][] out=new String[100][100];
		N=sc.nextInt();
		sc.nextLine();
		for(int i=0;i<N;i++){
			in[i][0]=sc.nextLine();
			out[i][0]=sc.nextLine();
		}
		Q=sc.nextInt();
		sc.nextLine();
		for(int i=0;i<Q;Q++){
            int temp=0;
            String ans=sc.nextLine();
            for(int j=0;j<N;j++){
                if(ans.equals(in[j][0])){
                    temp=j;
                }
            }
            System.out.println(out[temp][0]);
        }
	}
}
