package CondittionalStatements;

import java.util.Scanner;

//Write a Java program that reads a floating-point number and prints "zero" if the number is zero. Otherwise, print "positive" or "negative". Add "small" if the absolute value of the number is less than 1, or "large" if it exceeds 1,000,000.


public class fouthProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter any number");
        float num1 = sc.nextFloat();


        if (num1 > 0){
            System.out.println("It is a positive Number");
            if (num1 > 1000000){
                System.out.println("it is also a large number");
            }


        } else if (num1 < 0) {
            System.out.println("It is a negative number");

        } else {
            System.out.println(" the number is Zero");
        }
    }
}
