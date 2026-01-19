import java.util.*;
public class OpShift {

//    static ArrayList<ArrayList<Integer>> dList = new ArrayList<>();
    static ArrayList<Integer> dList = new ArrayList<>();
    static ArrayList<Integer> currentList = new ArrayList<>();

    public static void main(String[] argus) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n;
        for (int i = 0; i < t; i++) {
            n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            recurse(s, 0, s.length());
        }
        System.out.println(dList);
    }

    public static String shift(String s, int d) {
        String cycle = s + s + s;
        return cycle.substring(s.length() - d, 2 * s.length() - d);
    }

    public static boolean valid (String s) {
        for (char c : s.toCharArray()) if (c == '0') return false;
        return true;
    }

    public static void recurse (String s, int iter, int min) {
        if (iter > s.length()) return;
        int d = getD(currentList), newMin = min;
        if (valid(s)) {
            if (d < min) { dList.add(d); newMin = d; }
            return;
        }

        for (int i = 1; i < s.length(); i++) {
            currentList.add(i);
            recurse(newString(s, i), iter + 1, newMin);
            currentList.removeLast();
        }
    }

    public static String newString(String s, int d) {
        String t = shift(s, d), newString = s;
        for (int i = 0; i < t.length(); i++) {
            char c = t.charAt(i);
            if (c == '1') newString = newString.substring(0, i) + '1' + newString.substring(i + 1);
        }
        return newString;
    }

    public static int getD (ArrayList<Integer> d) {
        int sum = 0;
        for (int i : d) sum += i;
        return sum;
    }

}

/*
Problem B. Optimal Shifts
----------
Note that each operation on string t is performed on a fresh version of string s.
That is, if s = "1000", then after a shift with d = 1, the string becomes s = "1100",
and after a shift with d = 2, it becomes s = "1111".
100010001000
110011001100
 */