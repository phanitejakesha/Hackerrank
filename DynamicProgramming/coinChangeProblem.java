import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static long getWays(int[] c,int m,int n){
      
       long[] table = new long[n+1];
       Arrays.fill(table, 0); 
       table[0] = 1 ;
       for (int i=0; i<m; i++)
            for (int j=c[i]; j<=n; j++)
                table[j] += table[j-c[i]];
 
        return table[n]; 
        
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] c = new int[m];
        for(int c_i=0; c_i < m; c_i++){
            c[c_i] = in.nextInt();
        }
        // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
        System.out.println(getWays(c, m, n));
    }
}


