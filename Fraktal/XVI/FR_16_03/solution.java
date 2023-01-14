import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        String res = "";
        String[] words = str.split("_");
        for (String word : words) {
            StringBuilder stringBuilder = new StringBuilder(word);
            char ch = word.charAt(0);
            ch -= 32;
            stringBuilder.setCharAt(0, ch);
            res += stringBuilder.toString();
        }
        StringBuilder resultStringBuilder = new StringBuilder(res);
        char ch = res.charAt(0);
        ch += 32;
        resultStringBuilder.setCharAt(0, ch);
        System.out.print(resultStringBuilder);
    }
}

