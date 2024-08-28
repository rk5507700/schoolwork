package src;

import java.util.Scanner;

public class customer{
    private String name;
    private String acc_no;
    private double balance = 0;

    Scanner sc = new Scanner(System.in);

    public void deposite(){
        System.out.println("Enter the amount to be deposited: ");
        double amount =  sc.nextDouble();
        this.balance += amount;
        System.out.print("The updated a/c balance is : "+balance+"\n");
    }

    public void Withdraw(){
        System.out.println("Enter the amount to be withdrawn: ");
        double amount = sc.nextDouble();
        if (amount <= balance) {
            this.balance -= amount;
            System.out.print(amount+" withdrawed successfully.\n");
            System.out.print("The updated a/c balance is : "+balance+"\n");
            // return amount;
        } else {
            System.out.println("!!!Insufficient balance!!!");
            // return 0;
        }
    }

    public void displayBalance(){
        double amount = balance;
        System.out.print("The acc balance is : "+ amount+"\n");
    }

    public void displayDetails(){
        System.out.print("Name : "+name+"\n");
        System.out.print("A/c no. : "+acc_no+"\n");
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAcc_no() {
        return acc_no;
    }

    public void setAcc_no(String acc_no) {
        this.acc_no = acc_no;
    }

    @Override
    public String toString() {
        return "customer [name=" + name + ", acc_no=" + acc_no + "]";
    }
}