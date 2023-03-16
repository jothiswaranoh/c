import java.util.Scanner;

public class Alternative {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        int arr[][] = new int[num][num];
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                arr[i][j] = scan.nextInt();
            }
        }
        System.out.println();
        for (int i = 0; i < num; i++,System.out.println()) {
            for (int j = 0; j < num; j++) {
                if((i + j) % 2 != 0)
                    System.out.print("* ");
                else
                    System.out.print(arr[i][j] + " ");
            }
        }
        scan.close();
    }
}