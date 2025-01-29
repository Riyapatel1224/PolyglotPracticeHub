import java.util.*;
import java.lang.*;
import java.io.*;

class demo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int T1, T2;
        for (int i = 0; i < t; i++) {
            int N = sc.nextInt();
            int S = sc.nextInt();
            for (T1 = 0, T2 = N; T1 <= N && T2 >= 0; T1++, T2--) {
                System.out.println(T1 + " " + T2);
            }

        }

        sc.close();
    }

}
