package src;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // System.out.println("Hello, World!");
        numberOperations numOps = new numberOperations();
        int number = sc.nextInt();
        // double factorialOfNumber = numOps.factorial(number);
        // System.out.print("The factorial is: "+factorialOfNumber);
        boolean isArmstrong = numOps.testArmstrong(number);
        System.out.print(isArmstrong);
    }
    
}