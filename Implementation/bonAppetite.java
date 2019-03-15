import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int bonAppetit(int n, int k, int b, int[] ar) {
        int total=0;
        for(int i=0;i<n;i++){
            total+=ar[i];
        }
        if(total/2==b){
            return b-((total-ar[k])/2);
            
        }
        else
       {
            System.out.println("Bon Appetit");
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int b = in.nextInt();
        int result = bonAppetit(n, k, b, ar);
        if(result!=0){
        System.out.println(result);
        }
    }
}


