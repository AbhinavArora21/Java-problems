import java.io.File;
import java.io.IOException;

public class create_file {
    public static void main(String[] args) {
        File file = new File("myfile2.txt"); // initialize File object and passing path as argument
        boolean result;
        try {
            result = file.createNewFile(); // creates a new file
            if (result) // test if successfully created a new file
            {
                System.out.println("file created " + file.getCanonicalPath()); // returns the path string
            } else {
                System.out.println("File already exist at location: " + file.getCanonicalPath());
            }
        } catch (IOException e) {
            e.printStackTrace(); // prints exception if any
        }
    }
}