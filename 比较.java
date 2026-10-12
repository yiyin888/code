package 翁凯;

import java.util.Scanner;

public class 比较 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int je=10;
        int balance=0;
        while(true) {
            System.out.println("请投币");
            int tb = sc.nextInt();
            balance+=tb;
            if(balance>=je) {
                System.out.println("**********");
                System.out.println("**yhs专线**");
                System.out.println("*票价:10元*");
                System.out.println("**********");
                System.out.println("zao ling"+(balance-je)+"元");
                balance=0;
            }
        }
    }

}
