import java.util.*;
class js
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
          ArrayList<Integer> sl=new ArrayList<Integer>();
          ArrayList<Integer> sll=new ArrayList<Integer>();
          

          sl.add(2);
          sl.add(1);

          sl.add(5);

          sl.add(4);
          sl.add(6);
          sl.add(7);
    // for(int obj:sl)
    // System.out.println(obj);


int n=6;
sll.add(sl.get(0));
sll.add(sl.get(n-1));
sll.sort(Comparator.naturalOrder());
int min=sll.get(0);

    System.out.println(min*(n-2));


    }
}