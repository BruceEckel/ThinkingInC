public class Stack {
    private int[] data;
    private int ptr;
    
    public Stack(int size) {
        data = new int[size];
        ptr = 0;
    }
    public void push(int x) {
        if (ptr < data.length)
            data[ptr++] = x;
    }
    public int pop() {
        if (ptr > 0)
            return data[--ptr];
        else
            return Integer.MIN_VALUE;
    }
    public int top() {
        if (ptr > 0)
            return data[ptr-1];
        else
            return Integer.MIN_VALUE;
    }
    public int size() {
        return ptr;
    }
    
    public static void main(String[] args) {
        Stack stk = new Stack(5);
        for (int i = 0; i < 5; ++i)
            stk.push(i);
        while (stk.size() > 0)
            System.out.print(stk.pop() + " ");
        System.out.println();
    }
}
