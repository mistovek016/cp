import java.util.Scanner;
public class palindrome {
    public static void main(String[] argus) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter a sentence: ");
        String s = sc.nextLine();
        palindrome obj = new palindrome();
        System.out.println("""
            Please enter your choice:
            0: Sentence Case
            1: First Letter Caps
            2: ALL UPPERCASE
            3: all lowercase
            4: tOGGLE cASE
            """); 
        int choice = sc.nextInt();

        switch (choice) {
            case 0:
                System.out.println(obj.delCase(s, false));
                break;

            case 1:
                System.out.println(obj.delCase(s, true));
                break;

            case 2:
                System.out.println(s.toUpperCase());
                break;

            case 3:
                System.out.println(s.toLowerCase());
                break;

            case 4:
                for (int i = 0; i < s.length(); i++) {
                    char ch = s.charAt(i);
                    if (Character.isUpperCase(ch))
                        s = s.substring(0, i) + Character.toLowerCase(ch) + s.substring(i + 1);
                    else if (Character.isLowerCase(ch))
                        s = s.substring(0, i) + Character.toUpperCase(ch) + s.substring(i + 1);
                }
                System.out.println(s);
                break;

            default:
                System.out.println("Invalid choice");
        }
    }

    public String delCase(String str, boolean isEachWord) {
        boolean isDelimiter = true;
        // str = Character.toUpperCase(str.charAt(0)) + str.substring(1);
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (".?!".indexOf(ch) != -1 || (isEachWord && ch == ' ')) {
                isDelimiter = true;
            }

            if(isDelimiter && Character.isLetter(ch)) {
                if (Character.isLowerCase(ch)) {
                    str = str.substring(0, i) + Character.toUpperCase(ch) + str.substring(i + 1);
                }
                isDelimiter = false;
                continue;

            }

            if (Character.isUpperCase(ch)) {
                str = str.substring(0, i) + Character.toLowerCase(ch) + str.substring(i + 1);
            }
        }

        return str;
    }
}
