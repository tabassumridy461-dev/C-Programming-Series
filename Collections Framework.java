import java.util.ArrayList;

public class StudentArrayList {

    public void showStudents() {

        ArrayList<String> students = new ArrayList<>();

        students.add("Ridy");
        students.add("Nabila");
        students.add("Rahim");
        students.add("Karim");

        students.remove("Rahim");

        System.out.println("Contains Karim? " + students.contains("Karim"));

        System.out.println("\nStudent List:");

        for (String name : students) {

            System.out.println(name);

        }

    }

    public static void main(String[] args) {

        StudentArrayList obj = new StudentArrayList();
        obj.showStudents();

    }
}
