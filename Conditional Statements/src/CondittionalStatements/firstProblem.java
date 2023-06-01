package CondittionalStatements;
import java.util.Scanner;

public class firstProblem {

//    Program to check weather the given number is negative or positive

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number : ");
        int a = sc.nextInt();

        if (a >= 0){
            System.out.println("It is a positive Number");
        }
        else {
            System.out.println("It is a negative Number");
        }



    }


}