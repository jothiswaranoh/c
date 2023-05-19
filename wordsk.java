import java.util.Scanner;

public class Problem2 {
    public static boolean isIn(String s,String wordDict[]){
        for(int i = 0;i < wordDict.length;i++){
            if(s.equals(wordDict[i]))
                return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter no of words in the dictionary: ");
        int len = scan.nextInt();
        System.out.println("Enter " + len + " words to the dictionary");
        String wordDict[] = new String[len];
        for (int i = 0; i < wordDict.length; i++) {
            wordDict[i] = scan.next();
        }
        System.out.print("Enter the word: ");
        String str = scan.next();
        StringBuffer s = new StringBuffer(str);
        for(int i = 0;i < s.length();i++)
        {
            for (int j = i; j < s.length(); j++) 
            {
                if(isIn(s.substring(i, j+1), wordDict)){
                    s.replace(i, j+1, "");
                    i = -1;
                    break;
                }
            }
        }
        if(s.length() == 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
        scan.close();
    }
}
