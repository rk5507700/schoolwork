package src;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        customer user = new customer();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your name: ");
        user.setName(sc.nextLine());
        System.out.println("Enter your A/c no.: ");
        user.setAcc_no(sc.nextLine());
        user.displayDetails();
        
        boolean isRunning = true;
        while (isRunning) {
            System.out.println("1.Deposite\n2.Withdraw\n3.Balance\n4.Exit");
            System.out.println("Enter your choice: ");
            String choice = sc.nextLine();
            switch (choice) {
                case "1": 
                    user.deposite();
                    break;
                case "2": user.Withdraw();
                    break;
                case "3": user.displayBalance();
                    break;
                case "4": isRunning = false;
                    break;
            
                default:
                    System.out.println("Invalid choice.\n");
                    break;
            }

        }

    }
}

