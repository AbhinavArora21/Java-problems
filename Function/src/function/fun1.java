package function;
 //syntax of function

/*  return_type name(){
      // body
      return statements;
       }
 */

import java.util.Scanner;

public class fun1 {
    public static void main(String[] args) {
      sum();
    int ans =   sum1();
        System.out.println(ans);
    }
    // if you don't want to return anything you write void
        static void sum() {
        Scanner in = new Scanner(System.in);
        int num1,num2,sum;
        System.out.println("Enter the number1:");
        num1 = in.nextInt();
        System.out.println("Enter the number2:");
        num2 = in.nextInt();
        sum = num1 + num2;
        System.out.println("The sum of the two number is:" + sum );

    }
    static int sum1() {
        Scanner in = new Scanner(System.in);
        int num1, num2, sum;
        System.out.println("Enter the number1:");
        num1 = in.nextInt();
        System.out.println("Enter the number2:");
        num2 = in.nextInt();
        sum = num1 + num2;
        return sum;
    }}
