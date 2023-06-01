package PatternProblem;

public class One {
    public static void main(String[] args) {
        pattern1(4);
    }
    static void pattern1(int n){
        for (int row = 0; row <= n; row++) {
            for (int col = 0; col <= row; col++) {
                System.out.print("* ");

            }
            System.out.println();
        }
    }
}
