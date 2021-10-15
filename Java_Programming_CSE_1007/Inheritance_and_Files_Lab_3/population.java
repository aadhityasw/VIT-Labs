import java.util.*;
import java.io.*;
import java.lang.Math;
class q2
{
    public static void main(String args[]) throws IOException
    {
        Scanner sc = new Scanner(new File("practice.txt"));
        FileWriter out = new FileWriter("output.txt");
        int test;
        try
        {
            test = sc.nextInt();
            int alpha, beta, Aorg=0, Borg=0, A=0, B=0, K, chi, remchild, Y, lv;
            int dec[] = new int[2];
            int children[] = new int[2];
            String s="";
            for(int tes=1;tes<=test;tes++)
            {
                Aorg = sc.nextInt();
                Borg = sc.nextInt();
                A = Aorg;
                B = Borg;
                alpha = sc.nextInt();
                beta = sc.nextInt();
                Y = sc.nextInt();
                for(lv=0;lv<Y;lv++)
                {
                    K = Math.min(A, B);
                    dec[0] = A - (int)Math.floor(A*0.01);
                    dec[1] = B - (int)Math.floor(B*0.01);
                    chi = (int)Math.floor(0.02*K);
                    children[0] = (int)Math.floor(alpha*chi/100);
                    children[1] = (int)Math.floor(beta*chi/100);
                    remchild = chi-children[0]-children[1];
                    children[0] += (int)Math.floor(remchild/2);
                    children[1] += remchild - (int)Math.floor(remchild/2);
                    A = dec[0] + children[0];
                    B = dec[1] + children[1];
                }
                s = printStatement(tes, Aorg, Borg, alpha, beta, Y, A, B);
                out.write(s);
            }
        } finally {
            sc.close();
            out.close();
            System.out.println("The output has been placed in the file and it has been closed.");
        }
    }

    static String printStatement(int tes, int Aorg, int Borg, int alpha, int beta, int y, int A, int B)
    {
        String res="";
        res = res + "Test Case " + tes + " :\n";
        res = res + "Initial Acrobots : " + Aorg + "\n";
        res = res + "Initial Bouncoids : " + Borg + "\n";
        res = res + "Eternal Parameter alpha : " + alpha + "\n";
        res = res + "Eternal Parameter beta : " + beta + "\n";
        res = res + "Duration : " + y + "\n";
        res = res + "Final Acrobats : " + A + "\n";
        res = res + "Final Bouncoids : " + B + "\n";
        res = res + "-----------------------------------------------------------------------------------\n";
        return(res);
    }
}