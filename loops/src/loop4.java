public class loop4 {
    // program to find factorial of any natural number
//
//    public static void main(String[] args) {
//        int n = 5;
//        int i=1;
//
//        while ( n>0){
//            i = i*n;
//            n--;
//            System.out.println(i);
//        }
//        System.out.println(i);
//
    public static void main(String[] args) {
        int[] A = {11,21,13,42,0};
        try {
            int C = A[1] / A[4];


            System.out.println(C);

        }
        catch (ArithmeticException e){
            System.out.println("abbey pagal hai kya kuch bhi likh rha hai tere baap ki shadi hai kya bei ");
        }
        System.out.println(" this is exception block ");

    }




    }
