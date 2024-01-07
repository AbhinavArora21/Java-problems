import java.io.File;

public class create_folder {

//    method to create folder
    public static void createFolder(String folderpath){
        File f =new File(folderpath);

        if(!f.exists()){
            f.mkdir();
            System.out.println("folder is created successfully" + folderpath );
        }
    }
//    method to check folder if exits
    public static boolean checkFolder(String folderpath){
        File f =new File(folderpath);

         return (f.exists());
    }

    public static void main(String[] args) {
        String f = "D:\\Java-Code\\Java-problems\\file-handling-result";
//        createFolder(f);
        boolean result = checkFolder(f);
        System.out.println(result);
    }
}
