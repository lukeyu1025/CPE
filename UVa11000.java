import java.util.Scanner;
class main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt();
		while(num!=-1&&num>=0){
			long male=0,female=1,tempmale,tempfemale,all;
			for(int i=0;i<num;i++){
				tempmale=male;
				tempfemale=female;
				male+=tempfemale;
				female+=tempmale;
				female-=tempfemale-1;
			}
			all=male+female;
			System.out.println(male+" "+all);
			num=sc.nextInt();
		}
	}
}
