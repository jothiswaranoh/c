import java.util.*;
class js{
    public static boolean isin(String str,String[] words)
    {
for(int i=0;i<words.length;i++)
{
    if(str.equals(words[i]));
    {
        return true;
    }
}
return false;
    }
    public static void main(String[] args)
    {
        String str="leedecode";
        String[] words={"leed","code"};
        StringBuffer str1 =  new StringBuffer(str);
        for(int i=0;i<str1.length();i++)
        {
        for(int j=i;i<str1.length();j++)
        {
            if(isin(str1.substring(i,j+1),words)){
                str1.replace(i,j+1,"");
                i=-1;
                System.out.println(str1);
                break;
            }
        }

        }
        if(str1.length()==0)
        {
            System.out.print("true");
        }
        else
        {
            System.out.print("0");
        }
    }
}