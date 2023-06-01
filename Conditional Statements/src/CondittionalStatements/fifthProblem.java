package CondittionalStatements;

import java.util.Scanner;

public class fifthProblem {

    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);

        System.out.println("Enter any number from 1 to 7, so that i can tell you week days according to that digit. ");
        int a = sc.nextInt();

        if ( a< 8){
           if (a == 1){
               System.out.println("Monday");
           } else if (a==2) {
               System.out.println("Tuesday");

           } else if (a==3) {
               System.out.println("wednessday");

           } else if (a==4) {
               System.out.println("Thursday");

           } else if (a==5) {
               System.out.println("Friday");

           } else if (a==6) {
               System.out.println("saturday");

           }
           else {
               System.out.println("Sunday");
           }
        }
        else {
            System.out.println("you enetered a wrong number, please enter number only from 1 to 7");}







    }
}
