package CondittionalStatements;
import java.util.Scanner;


//        Program to find the greatest integer number from input taken from user.


public class ThirdProblem {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number");
        int num1 = sc.nextInt();
        System.out.println("Enter second number");
        int num2 = sc.nextInt();
        System.out.println("Enter thind number");
        int num3 = sc.nextInt();


        if (num1 >= num2 && num1 >=num3)
        {
            System.out.println(num1 + "is a greater integer number");
        }

        else if (num2 >= num1 && num2 >= num3) {
            System.out.println(num2 + "is a greater integer number");
        }
        else {
            System.out.println(num3 + " is greater integer number");
        }


        }
    }
