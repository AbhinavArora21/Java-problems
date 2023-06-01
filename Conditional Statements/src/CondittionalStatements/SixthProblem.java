package CondittionalStatements;

import java.util.Scanner;

public class SixthProblem {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);


        System.out.println("please Enter first floating point number");
        float firstnum = sc.nextFloat();

        System.out.println("Please Enter second floating point numnber");
        float secondnum = sc.nextFloat();

        if (firstnum==secondnum){
            System.out.println("Yes both have same floating point number");
        }
        else {
            System.out.println("They both are different");
        }





    }
}
