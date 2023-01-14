import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        int result = 0;
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();

        str = str.replaceAll("[^0-9]", " ");
        str = str.replaceAll(" +", " ");
        String[] arrOfStr = str.split(" ");
        for (String a : arrOfStr) {
            if (!a.isEmpty()) {
                int val = Integer.parseInt(a);
                result += val;
            }
        }
        System.out.println(result);
    }
}