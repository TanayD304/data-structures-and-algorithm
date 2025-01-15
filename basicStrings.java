
import java.util.*;
import java.util.Arrays;

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
        int end = s.size() - 1;

        while (start < end) {
            swapChars(s, start++, end--);
        }
    }

    public static boolean palindromeCheck(String s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if (s.charAt(start++) != s.charAt(end--)) {
                return false;
            }
        }

        return true;
    }

    public static String largeOddNum(String s) {
        int j = s.length() - 1;

        while (j >= 0) {
            if (s.charAt(j) == '1' || s.charAt(j) == '3' || s.charAt(j) == '5' || s.charAt(j) == '7' || s.charAt(j) == '9') {
                break;
            }
            j--;
        }

        int i = 0;

        while (i < s.length()) {
            if (s.charAt(i) != '0') {
                break;
            }
            i++;
        }

        return s.substring(i, j + 1);
    }

    public static String longestCommonPrefix(String[] str) {
        Arrays.sort(str);

        int maxLCPLength = Math.min(str[0].length(), str[str.length - 1].length());

        String ans = "";

        int i = 0;
        while (i < maxLCPLength) {
            if (str[0].charAt(i) == str[str.length - 1].charAt(i)) {
                ans += str[0].charAt(i);
            } else {
                return ans;
            }
            i++;
        }
        return ans;
    }

    public static boolean isomorphicString(String s, String t) {
        int[] freqS = new int[26];
        int[] freqT = new int[26];

        for (int i = 0; i < s.length(); i++) {
            if (freqS[(int) s.charAt(i) - 97] != freqT[(int) t.charAt(i) - 97]) {
                return false;
            }

            freqS[(int) s.charAt(i) - 97] = i + 1;
            freqT[(int) t.charAt(i) - 97] = i + 1;
        }

        return true;
    }

    public static boolean rotateString(String s, String goal) {
        s = s + s;
        return s.contains(goal);
    }

    public static boolean anagramStrings(String s, String t) {
        if(s.length()!=t.length()) return false;
        int[] freq = new int[26];

        for (int i = 0; i < s.length(); i++) {
            freq[s.charAt(i) - 97]++;
            freq[t.charAt(i) - 97]--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
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
        // String s = "5347";
        // System.out.println(largeOddNum(s));
        // s = "0214638";
        // System.out.println(largeOddNum(s));
        // s = "0032579";
        // System.out.println(largeOddNum(s));
        // Longest Common Prefix
        // String[] str = new String[4];
        // str[0] = "flowers";
        // str[1] = "flow";
        // str[2] = "fly";
        // str[3] = "flight";
        // System.out.println(longestCommonPrefix(str));
        // str[0] = "dog";
        // str[1] = "cat";
        // str[2] = "monkey";
        // str[3] = "animal";
        // System.out.println(longestCommonPrefix(str));
        // Isomorphic String
        // String s = "add";
        // String t = "egg";
        // System.out.println(isomorphicString(s, t));
        // s = "apple";
        // t = "bbnbm";
        // System.out.println(isomorphicString(s, t));
        // Rotate String
        // String s = "abcde";
        // String t = "cdeab";
        // System.out.println(rotateString(s, t));
        // s = "abcde";
        // t = "adeac";
        // System.out.println(rotateString(s, t));
        // Valid Anagram
        String s = "anagram";
        String t = "naagram";
        System.out.println(anagramStrings(s, t));
        s = "cat";
        t = "dog";
        System.out.println(anagramStrings(s, t));
    }
}
