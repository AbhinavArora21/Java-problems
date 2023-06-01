package CondittionalStatements;
import java.util.Scanner;


//        Program to write find roots of quadratic equation using if, else-if and else.


public class SecondProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the constant of a");
        double a = sc.nextDouble();
        System.out.println("Enter the constant of b");
        double b = sc.nextDouble();
        System.out.println("Enter the constant of c");
        double c = sc.nextDouble();


//        now we have to find the value of D(Discriminant) = b*b - 4ac

        double D = b * b - 4 * a * c;

//        Now we are going to find the roots from the value of discriminant
//                     formula for finding the root is:
//                      x = -b (+/-) Underrooot(4ac)/2a

            if (D >0.0){
                double root1 = (-b + Math.pow(D,0.5))/ ( 2 * a);
                double root2 = (-b - Math.pow(D,0.5))/ ( 2 * a);
                System.out.println("The roots of given quadratic equation is" + root1 + "  and  " + root2);
            } else if (D ==0.0) {
               double root1 = -b/(2.0*a);
                System.out.println(root1);
            }
            else {
                System.out.println("The equation has no real roots.");
            }


    }
}
