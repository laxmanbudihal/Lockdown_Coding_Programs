/* Q1.Using methods charAt() & length() of String class, write a program to print the
frequency of each character in a string.
“Hello friend”
Output should be
-: 1
d: 1
e: 2
f: 1
(continued for all character in the string) 

Ans:
*/
import java.io.*;
import java.util.*;

public class Online{
     public static void main(String[] args) {
        String str = "hello friend";
        char ele;
        int i=0,j=0;
        for(i= 0 ;i<str.length();i++)
        {
            int c = 0;
            ele = str.charAt(i);
            // System.out.println(ele);
            if (ele != '-')
            {
                for(j= i ;j<str.length();j++)
                {
                    if (ele == str.charAt(j))
                    {
                        c++;
                        
                    }
                    
                }
                str = str.replace(ele, '-');
                System.out.println(ele+" "+c);
            }
            
        }
        
        
    }
}