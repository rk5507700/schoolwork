package src;

import java.util.List;
import java.util.stream.Collectors;

public class numberOperations {
    public int factorial(int num){
        int fact = num;
        while(num > 1){
            fact *= (num-1);
            num -= 1;
        }
        return fact;
    }

    public boolean testArmstrong(int number){
        String num = Integer.toString(number);
        List<Integer> result = num.chars().map(Character::getNumericValue).boxed().collect(Collectors.toList());
        int sumNumber = 0;
        for(Integer num1 : result){
            sumNumber += num1*num1*num1;
        }
        if(sumNumber == number){
            return true;
        } else {
            return false;
        }
    }
    
}