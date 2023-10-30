public class Label {
    public static void main(String[] args) {
    outer:
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                System.out.println("i: " + i + ", j: " + j);
                if (i + j == 2)
                    continue outer;
                if (i + j == 4)
                    break outer;
            }
        }
    }
}

