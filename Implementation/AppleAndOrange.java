import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int[] apple = new int[m];
        for(int apple_i=0; apple_i < m; apple_i++){
            apple[apple_i] = in.nextInt();
        }
        int[] orange = new int[n];
        for(int orange_i=0; orange_i < n; orange_i++){
            orange[orange_i] = in.nextInt();
        }
        int c_apple=0;
        int c_orange=0;
        for(int i=0;i<m;i++)
        {          
            if(apple[i] > 0)
            {
                if(apple[i]>=s-a && apple[i]<=t-a)
            {
                c_apple+=1;
            }
           }
        }
        
        for(int i=0;i<n;i++)
        {
            if(orange[i]<0)
            {
              orange[i]=-orange[i];
                if(orange[i]>=b-t && orange[i]<=b-s)
                {
                    c_orange+=1;
                }
            }
        }
        System.out.println(c_apple);
        System.out.println(c_orange);
    }
}


