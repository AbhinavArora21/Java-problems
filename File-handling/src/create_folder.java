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

//    rename folder
    public static void renameFolder(String oldpath, String newpath){
        File oldFolder = new File(oldpath);
        File newFolder = new File(newpath);

        if (oldFolder.exists()){
            oldFolder.renameTo(newFolder);
            System.out.println("folder renamed to:" + newFolder);
        }
    }

    public static void deleteFolder(String folderpath){
        File folder = new File(folderpath);

        if(folder.exists()){
            for(File file:folder.listFiles()){
                file.delete();
            }
            folder.delete();
            System.out.println("folder deleted" + folderpath);
        }
    }

    public static void main(String[] args) {
        String f = "D:\\Java-Code\\Java-problems\\file-handling-result";
//        createFolder(f);
//        boolean result = checkFolder(f);
//        System.out.println("folder exist :"+result);
//        String old_path = "D:\\Java-Code\\Java-problems\\file-handling-resultt";
//        String new_path = "D:\\Java-Code\\Java-problems\\file-handling-result";
//        renameFolder(old_path,new_path);
//        System.out.println("folder renamed to : " + new_path);

        deleteFolder(f);
    }
}
