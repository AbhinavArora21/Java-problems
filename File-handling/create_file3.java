
import java.io.IOException;
import java.nio.file.*;

public class create_file3 {

    public static void main(String[] args) {
        Path path = Paths.get("javaprogram.txt"); // creates Path instance
        try {
            Path p = Files.createFile(path); // creates file at specified location
            System.out.println("File Created at Path: " + p);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
