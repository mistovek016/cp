import java.util.ArrayList;
import java.util.Scanner;
public class OpsWithInv {
    public static void main(String[] argus) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n;
        ArrayList<Integer> nums = new ArrayList<>();
        ArrayList<Integer> ops = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            for (char c : s.toCharArray()) {
                if (Character.isDigit(c)) nums.add((int)c - 49);
            }
            ops.add(getOps(nums));
            nums.clear();
        }
        for (int i : ops) System.out.println(i);
    }

    public static int getOps(ArrayList<Integer> nums) {
         int removed = 0, max = nums.get(0);
         for (int n : nums) {
             if (n < max) removed++;
             else if (n > max) max = n;
         }
         return removed;
    }
}

// 3 4 3 4 4 5 3 4 3 6 3
// 5 4 3 2 1 2 3 4 5

// 1 2 3 1 2 4 1 2 5 1 3
// 1 2 3 4 5

// 1 3 2 1 0 9
// 1 3 9


/*
Problem B. Optimal Shifts
----------
Note that each operation on string t is performed on a fresh version of string s.
That is, if s = "1000", then after a shift with d = 1, the string becomes s = "1100",
and after a shift with d = 2, it becomes s = "1111".
100010001000
110011001100
 */