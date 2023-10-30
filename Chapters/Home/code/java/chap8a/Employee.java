public class Employee {
    private String last;
    private String first;
    private String title;
    private int age;
    
    public Employee(String l, String f,
                    String t, int a) {
        last = l;
        first = f;
        title = t;
        age = a;
    }
    public String toString() {
        return "{" + last + "," + first +
               "," + title+ "," + age + "}";
    }
    public void setLast(String s) {
        last = s;
    }
    public void setFirst(String s) {
        first = s;
    }
    public void setTitle(String s) {
        title = s;
    }
    public void setAge(int n) {
        age = n;
    }
    public static void main(String[] args) {
        Employee e = new Employee("Jordan", "Michael",
                                  "Guard", 37);
        System.out.println(e);
        e.setLast("Malone");
        e.setFirst("Karl");
        e.setTitle("Center");
        e.setAge(36);
        System.out.println(e);
    }
}
