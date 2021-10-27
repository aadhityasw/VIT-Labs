class Divisors {
    long[] findDivisors(long a, long b) {
        long[] ans = { 0, 0 };
        long i, j;
        int d;
        for (i = a; i <= b; i++) {
            d = 1;
            for (j = 1; j <= (i/2); j++) {
                if (i % j == 0) {
                    d++;
                }
            }
            if (d > ans[1]) {
                ans[0] = i;
                ans[1] = d;
            }
        }
        return (ans);
    }
}

class NewThread extends Thread {
    Divisors ob;
    long num, div, a, b;

    NewThread(long a, long b, Divisors obj) {
        super();
        this.ob = obj;
        num = 0;
        div = 0;
        this.a = a;
        this.b = b;
        start();
    }

    public void run() {
        long[] ans = new long[2];
        ans = ob.findDivisors(a, b);
        this.num = ans[0];
        this.div = ans[1];
    }

    long[] getAnswer() {
        long[] ans = new long[2];
        ans[0] = num;
        ans[1] = div;
        return (ans);
    }
}

class q1 {
    public static void main(String[] args) {
        Divisors ob = new Divisors();
        long num = 0, div = 0, p = 1, q = 10000;
        long[] ans = new long[2];
        NewThread nobj;
        while (q <= 100000) {
            nobj = new NewThread(p, q, ob);
            try {
                //nobj.join();
                if (Thread.currentThread().getName().equals("main")) {
                    Thread.sleep(6000);
                }
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            ans = nobj.getAnswer();
            if (ans[1] > div) {
                num = ans[0];
                div = ans[1];
            }
            p += 10000;
            q += 10000;
        }
        System.out.println("The number with maximum divisors : " + num + " and it has " + div + " divisors.");
    }
}