// A 3d array
public class Array3 {
    public static void main(String[] args) {
        int[] a1 = {10,20,30,40,50};
        int[][] a2 = {{1,2}, {3,4}, {5,6}};
        int[][][] a3 = new int[2][][];
        a3[0] = a2;
        a3[1] = new int[2][];
        a3[1][0] = a1;
        a3[1][1] = new int[1];
        a3[1][1][0] = 99;
        for (int p = 0; p < a3.length; ++p) {
            for (int q = 0; q < a3[p].length; ++q) {
                for (int r = 0; r < a3[p][q].length; ++r)
                    System.out.print(a3[p][q][r] + " ");
                System.out.println();
            }
            System.out.println();
        }
        System.out.println();
    }
}

