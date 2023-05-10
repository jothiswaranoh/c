//Java code for the above approach

import java.io.*;

public class GFG {
	public static void main(String[] args) {
		String string = "geeksforgeeks";
		int index = -1;
		char fnc = ' ';
		for (char i : string.toCharArray()) {
			System.out.print(" "+string.indexOf(i) );
			System.out.println("last->"+string.lastIndexOf(i) );

			if (string.indexOf(i) == string.lastIndexOf(i)) 
			{
				fnc = i;
				break;
			}
			else {
				index += 1;
			}
		}
		if (index == 1) {
			System.out.println("Either all characters are repeating or "
							+ "string is empty");
		}
		else {
			System.out.println("First non-repeating character is " + fnc);
		}
	}
}
