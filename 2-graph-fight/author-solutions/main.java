import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int sum=0;
        int a[] = new int[N+5];         
        for (int i = 0; i < N; i++) {
           a[i] = s.nextInt();
            sum += a[i];
        }
        if(sum == 2*(N-1) )
        System.out.println("Yes");
        else
        System.out.println("No");
    }
}