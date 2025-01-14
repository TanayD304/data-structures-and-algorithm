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
    public static boolean palindromeCheck(String s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if(s.charAt(start++)!=s.charAt(end--)) return false;
        }

        return true;
    }
    public static String largeOddNum(String s) {
        int j = s.length()-1;

        while(j>=0) {
            if(s.charAt(j)=='1'||s.charAt(j) == '3'||s.charAt(j) == '5'||s.charAt(j) == '7'||s.charAt(j) == '9') {
                break;
            }
            j--;
        }

        int i = 0;

        while(i<s.length()) {
            if(s.charAt(i) != '0') {
                break;
            }
            i++;
        }

        return s.substring(i, j+1);
    }
    public static void main(String[] args) {
        // Reverse a string
        // Vector<Character> s = new Vector<>();
        // s.add('t');
        // s.add('a');
        // s.add('n');
        // s.add('a');
        // s.add('y');
        // printArray(s);
        // reverseString(s);
        // printArray(s);

        // Check Palidrome
        // String s = "tanay";
        // System.out.println(palindromeCheck(s));
        // s = "hannah";
        // System.out.println(palindromeCheck(s));

        // Largest odd number in a string
        String s = "5347";
        System.out.println(largeOddNum(s));
        s = "0214638";
        System.out.println(largeOddNum(s));
        s = "0032579";
        System.out.println(largeOddNum(s));
    }
}