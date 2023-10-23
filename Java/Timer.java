public class Timer {
    public static void main(String[] args) throws InterruptedException {
        int wait = 60; 
        int minute =  wait / 60 , second =  wait % 60;
        for (int i = 0; i < wait; i++) {
            System.out.print("\033[H\033[2J");
            System.out.printf("Wait %d:%02d%n",minute,second);
            Thread.sleep(1000);
            if (second == 0) {
                minute --;
                second = 59;
            } else second--;
        }
        System.out.println("Thanks for waiting");
    }
}