// A 2d array
public class Array2 {
    public static void main(String[] args) {
        int[][] a2 = {{1,2}, {3,4}, {5,6}};
        for (int j = 0; j < a2.length; ++j) {
            for (int k = 0; k < a2[j].length; ++k)
                System.out.print(a2[j][k] + " ");
            System.out.println();
        }
    }
}

