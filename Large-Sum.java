import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        BigInteger sum = new BigInteger("0");
        String s;
        for(int i=0;i<n;i++){
            s = in.nextLine();
            BigInteger temp = new BigInteger(s);
            sum = sum.add(temp);
        }
        s = sum + "";
        System.out.println(s.substring(0,10));
    }
}