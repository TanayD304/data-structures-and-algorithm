import java.util.*;
class basicStrings {
    public static void swapChars(Vector<Character> s, int i, int j) {
        char temp = s.get(i);
        s.set(i, s.get(j));
        s.set(j, temp);
    }
    public static void printArray(Vector<Character> s) {
        for (int i = 0; i < s.size(); i++) {
            System.out.print(s.get(i) + " ");
        }
        System.out.println();
    }
    public static void reverseString(Vector<Character> s) {
        int start = 0;
        int end = s.size()-1;

        while(start<end) {
            swapChars(s, start++, end--);
        }
    }
    public static void main(String[] args) {
        Vector<Character> s = new Vector<>();
        s.add('t');
        s.add('a');
        s.add('n');
        s.add('a');
        s.add('y');
        printArray(s);
        reverseString(s);
        printArray(s);
    }
}