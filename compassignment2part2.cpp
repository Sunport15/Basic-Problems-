//program to check odd even
#include<stdio.h>
int check_oddeven(int n);
int main(){
int num;
printf("enter a number : ");
scanf("%d",&num);
if(check_oddeven(num)==0)
printf("%d is an even number",num);
else
printf("%d is an odd number",num);
return 0;
}
int check_oddeven(int n){
if(n%2==0)
return 0;
else
return 1;
}

// program to checkif a number is prime , armstrong or perfect
#include<stdio.h>
int check_prime(int n);
int check_armstrong(int n);
int check_perfect(int n);
int main(){
int num;
printf("enter a number: ");
scanf("%d",&num);
if(check_prime(num)==0)
printf("%d is a prime number\n",num);
else
printf("%d is not a prime number\n",num);
if(check_armstrong(num)==0)
printf("%d is an armstrong number\n",num);
else
printf("%d is not an armstrong number\n",num);
if(check_perfect(num)==0)
printf("%d is a perfect number\n",num);
else
printf("%d is not a perfect number\n",num);
return 0;
}
int check_prime(int n){
int i;
for(i=2;i<n;i++){
if(n%i==0)
return 1;
else
return 0;
}
}
int check_armstrong(int n){
int sum=0,copy_num;
copy_num=n;
while(n){
sum+=(n%10)*(n%10)*(n%10);
n/=10;
}
if(sum==copy_num)
return 0;
else
return 1;
}
int check_perfect(int n){
int i,sum=0;
for(i=1;i<n;i++)
{
if(n%i==0)
sum+=i;
}
if(sum==n)
return 0;
else
return 1;
}

//program to find all prime numbers between given interval
#include<stdio.h>
int print_prime(int n1, int n2){
int i,j,count=0;
for(i=n1;i<=n2;i++){
for(j=2;j<i;j++)
{
if(i%j==0)
count++;
}
if(count==0)
printf("%d \n",i);
count=0;
}
}
int main(){
int n1,n2;
printf("enter interval : ");
scanf("%d %d",&n1,&n2);
printf("The prime numbers from %d to %d include : ",n1,n2);
print_prime(n1,n2);
return 0;
}

//program to find all strong numbers between given interval
#include<stdio.h>
int print_strong(int n1, int n2){
int i,j,sum=0,t,prod=1,temp;
for(i=n1;i<=n2;i++){
    
    t=i;
while(t){
temp=(t%10);
for(j=temp;j>0;j--){
prod*=j;
}
sum+=prod;
t/=10;
prod=1;

}
if(sum==i)
printf("%d \n",i);
sum=0;

}

}
int main(){
int n1,n2;
printf("enter interval : ");
scanf("%d %d",&n1,&n2);
printf("The strong numbers from %d to %d include : ",n1,n2);
print_strong(n1,n2);
return 0;
}

//program to find all armstrong numbers between given interval
#include<stdio.h>
int print_armstrong(int n1,int n2){
    int sum=0,i,t;
    for(i=n1;i<=n2;i++){
        t=i;
        while(t){
            sum+=(t%10)*(t%10)*(t%10);
            t/=10;
        }
        if(sum==i)
        printf("%d\n",i);
        sum=0;
    }
}
int main(){
    int n1,n2;
    printf("enter interval:");
    scanf("%d %d",&n1,&n2);
    printf("\n The Armstrong numbers from %d to %d are :",n1,n2);
    print_armstrong(n1,n2);
    return 0;
}
    
//program to find all perfect numbers between given interval
#include<stdio.h>
int print_perfect(int n1,int n2);
int main(){
    int n1,n2;
    printf("enter interval ");
    scanf("%d %d",&n1,&n2);
    printf("The perfect numbers from %d to %d are as follows:\n",n1,n2);
    print_perfect(n1,n2);
    return 0;
}
    int print_perfect(int n1,int n2){
        int i,j,sum=0;
        for(i=n1;i<=n2;i++){
            
                for(j=1;j<i;j++){
                    if(i%j==0)
                        sum+=j;
                        
                    
                }
                    if(sum==i)
                        printf("%d\n",i);
                        sum=0;
                    
                
                    }
                }

//program to find power of any number using recursion
#include<stdio.h>
int power(int base,int exp);
int main(){
int base,exp,res;
printf("enter base : ");
scanf("%d",&base);
printf("\nenter exponent : ");
scanf("%d",&exp);
res=power(base,exp);
printf("\n %d^%d=%d ",base,exp,res);
return 0;
}
int power(int base, int exp){
if(exp)
return(base*power(base,exp-1));
else
return 1;
}

//program to print natural numbers using recursion
#include<stdio.h>
int print(int n);
int main(){
int n ;
printf("Enter range : ");
scanf("%d",&n);
print(n);
return 0;
}
int print(int n){
printf("%d\n",n);
if(n!=1)
print(n-1);
}

//program to find sum of all natural numbers between 1 and n using recursion
#include <stdio.h>
int addNumbers(int n);
int main() {
    int num;
    printf("Enter range: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}

int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}

//program to find sum of all odd or even numbers in a guven range using recursion
#include <stdio.h>


int sumOfEven(int start, int end);
int sumOfodd(int start, int end);


int main()
{
    int start, end, sum;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    printf("Sum of even numbers between %d to %d = %d\n", start, end, sumofEven(start, end));
    printf("Sum of odd numbers between %d to %d = %d\n", start, end, sumofodd(start, end));
    
    return 0;
}




int sumofEven(int start, int end) 
{
    /* Base condition */
    if(start > end)
        return 0;
    else if (start%2==0)
        return (start + sumofEven(start + 2, end));
        else if(start%2!=0)
        return(start+1+sumofEven(start+3,end));
        
      
       
}
int sumofodd(int start, int end) 
{
    /* Base condition */
    if(start > end)
        return 0;
    else if (start%2==0)
        return(start+1+sumofodd(start+3,end));
        else if (start%2!=0)
        return (start + sumofodd(start + 2, end));
       
}

//program to find reverse of any number using recursion
#include<stdio.h>
#include<math.h>
int revnum(int num);
int main(){
    int n;
    printf("enter number to be reversed : ");
    scanf("%d",&n);
    printf("\n the reversed number is : %d ",revnum(n));
}
int revnum(int num){
    int digits=(int)log10(num);
    if(num==0)
    return 0;
    return ((num%10)*(int)pow(10,digits)+revnum(num/10));
}

//program to check if a number is palindrome using recursion
#include <stdio.h>
#include <math.h>

 
int reverse(int num);
int isPalindrome(int num);



int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    
    return 0;
}

int isPalindrome(int num)
{
    
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
}


int reverse(int num)
{
    
    int digit = (int)log10(num);
    
   
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

//program to add digits of a given number using recursion

#include<stdio.h>
int sumofdigits(int num);
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    printf("\n the sum of the digits is : %d ",sumofdigits(n));
    return 0;
}
int sumofdigits(int num){
    if (num==0)
    return 0;
    return num%10+sumofdigits(num/10);
    
}

//program to find factorial of a number using recursion

#include<stdio.h>
int factorial(int num);
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    printf("\n the factorial of the number is : %d ",factorial(n));
    return 0;
}
int factorial(int num){
   if(num!=1)
    return num*factorial(num-1);
    
}

//program 19 fibonacci sequence using recursion

#include<stdio.h>    
void printFibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    printFibonacci(n-2);//n-2 because 2 numbers are already printed    
  return 0;  
 } 

//program 20 to find GCD(HCF) of tw numbers using recursion
#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

//program 21 to find LCM of two numbers using recursion
#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int num1, num2, LCM;
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num1, &num2);
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    
    return 0;
}

int lcm(int a, int b)
{
    static int multiple = 0;
    multiple+=b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}

//program to find max between two numbers
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }
    if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }
    if(num1 == num2)
    {
        printf("Both are equal");
    }

    return 0;
}

//program to find max between three numbers
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if(num1 > num2)
    {
        if(num1>num3)
        printf("%d is maximum", num1);
        else
         printf("%d is maximum", num3);
        
    }
    if(num2 > num1)
    {
         if(num2>num3)
        printf("%d is maximum", num2);
        else
         printf("%d is maximum", num3);
    }
    if(num1 == num2 && num1==num3)
    {
       printf(" All the numbers are equal");
    }

    return 0;
}

//program to check if a number is negative , positive or zero
#include <stdio.h>
 
void main()
{
    int number;
 
    printf("Enter a number \n");
    scanf("%d", &number);
    if (number >0)
        printf("%d is a positive number \n", number);
    else if(number < 0)
        printf("%d is a negative number \n", number);
        else
        printf("%d is zero \n", number);
        
}

//program to check if a number is divisible by 5 and 11 or not
#include <stdio.h>
 
void main()
{
    int number;
 
    printf("Enter a number \n");
    scanf("%d", &number);
    if (number%5==0 && number%11==0)
        printf("%d is divisible by 5 and 11 \n", number);
    else if(number%5==0 && number%11!=0)
        printf("%d is only divisible by 5 \n", number);
        else if(number%5!=0 && number%11==0)
        printf("%d is only divisible by 11 \n", number);
        else if(number%5!=0 && number%11!=0)
        printf("%d is neither divisible by 5 nor 11 \n", number);
        
}

//program to check if a number is even or odd
#include <stdio.h>
 
void main()
{
    int number;
 
    printf("Enter a number \n");
    scanf("%d", &number);
    if (number%2==0  )
        printf("%d is even \n", number);
    else 
        printf("%d is odd \n", number);
        
        
}

//program to check whether a year is leap year or not
#include <stdio.h>
 
void main()
{
    int year;
 
    printf("Enter a year \n");
    scanf("%d", &year);
    if (year%4==0  )
        printf("%d is a leap year \n", year);
    else 
        printf("%d is not a leap year \n", year);
        
        
}

//program to check if a charactet is an alphabet
#include <stdio.h>
 
void main()
{
    char ch;
 
    printf("Enter a character \n");
    scanf("%c", &ch);
    if ((int)ch>=65&&(int)ch<=90 || (int)ch>=97&&(int)ch<=122  )
        printf("%c is an alphabet \n", ch);
    else 
        printf("%c is not an alphabet \n", ch);
        
        
}

//program to input any character and check whether it is a consonant or vowel

#include <stdio.h>
 
void main()
{
    char ch;
 
    printf("Enter a character \n");
    scanf("%c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a vowel \n", ch);
    else 
        printf("%c is a consonant \n", ch);
        
        
}

//program to input a character and check whether it is a alphabet , digit or special character
 #include <stdio.h>
 
void main()
{
    char ch;
 
    printf("Enter a character \n");
    scanf("%c", &ch);
    if (ch>=65&&ch<=90 || ch>=97&&ch<=122)
        printf("%c is an alphabet \n", ch);
    else if(ch>=48&&ch<=57)
        printf("%c is a digit \n", ch);
        else 
         printf("%c is a special character \n", ch);
        
        
}

//program to check whether a character is upper case or lower case
#include <stdio.h>
 
void main()
{
    char ch;
 
    printf("Enter a character \n");
    scanf("%c", &ch);
    if (ch>=65&&ch<=90 )
        printf("%c is an upper case alphabet \n", ch);
    else if(ch>=97&&ch<=122)
        printf("%c is a lower case alphabet  \n", ch);
        else 
         printf("enter again");
        
        
} 

//program to input week number and print week day
#include <stdio.h>

int main()
{
    int week;
    printf("Enter week number (1-7): ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;  

//program to input month number and print number of days in the month
#include <stdio.h>

int main()
{
    int month,year;

    /* Input week number from user */
    printf("Enter month number and year  (1-12): ");
    scanf("%d", &month);
    printf("\nenter year : ");
    scanf("%d",&year);


    if(month == 1)
    {
        printf("31");
    }
    else if(month == 2)
    {
        if(year%4==0)
        printf("29");
        else
        printf("28");
    }
    else if(month == 3)
    {
        printf("31");
    }
    else if(month == 4)
    {
        printf("30");
    }
    else if(month == 5)
    {
        printf("31");
    }
    else if(month == 6)
    {
        printf("30");
    }
    else if(month == 7)
    {
        printf("31");
    }
    else if (month==8)
    {
        printf("31");
    }
    else if(month==9)
    {
        printf("30");
    }
    else if (month==10)
    {
        printf("31");
    }
    else if (month==11)
    {
        printf("30");
    }
    else if (month==12)
    {
        printf("31");
    }
    else
        printf("Invalid Input! Please enter month number between 1-12.");
    

    return 0;
}

//program to count number of notes in an amount
#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    
    /* Initialize all notes to 0 */
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    
    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

    return 0;
}

//program to input three angles and checking if triangle is valid
#include <stdio.h>

int main()
{
    int ang1,ang2,ang3;
    printf("Enter the 3 angles in a triangle : ");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    if((ang1+ang2+ang3)==180)
    printf("It is a valid triangle");
    else
    printf("It is NOT a valid triangle");

    return 0;
}

//program to input sides of a triangle to check if its valid or not
#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input three sides of a triangle */
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    
    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {
                
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
} 

//program to check if a triangle is equilateral,isosceles or scalene
#include <stdio.h>
int main()  
{  
    int sidea, sideb, sidec; //are three sides of a triangle  
  
    /* 
     * Reads all sides of a triangle 
     */  
    printf("Input three sides of triangle: ");  
    scanf("%d %d %d", &sidea, &sideb, &sidec);  
  
    if(sidea==sideb && sideb==sidec) //check whether all sides are equal  
    {  
        printf("This is an equilateral triangle.\n");  
    }  
    else if(sidea==sideb || sidea==sidec || sideb==sidec) //check whether two sides are equal  
    {  
        printf("This is an isosceles triangle.\n");  
    }  
    else //check whether no sides are equal  
    {  
        printf("This is a scalene triangle.\n");  
    }  
  
    return 0;  
} 

//program to print all roots of a quadratic equation
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 

//program to calculate profit or loss
#include <stdio.h>

int main()
{
    int cp,sp, amt; 
    
    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        /* Calculate Profit */
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        /* Calculate Loss */
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}

//program to calculate grade on the basis of percentage
#include <stdio.h>

int main()
{
    int phy,chem,maths,bio,comp,percentage;
    printf("Enter physics marks out of 100 : ");
    scanf("%d",&phy);
    printf("\nEnter chemistry marks out of 100 : ");
    scanf("%d",&chem);
    printf("\nEnter mathematics marks out of 100 : ");
    scanf("%d",&maths);
     printf("\nEnter biology marks out of 100 : ");
    scanf("%d",&bio);
     printf("\nEnter computer marks out of 100 : ");
    scanf("%d",&comp);
    percentage=(phy+chem+maths+bio+comp)/5;
    if(percentage>=90)
    printf("A");
    else if(percentage>=80&&percentage<90)
    printf("B");
    else if(percentage>=70&&percentage<80)
    printf("C");
    else if(percentage>=60&&percentage<70)
    printf("D");
    else if(percentage>=50&&percentage<60)
    printf("E");
    else if(percentage<40)
    printf("F");
    
    
    
    
    return 0;
}

//program to enter basic salary and calculate gross salary of an employee
#include <stdio.h>

int main()
{
    int sal;
    printf("Enter basic salaray of an employee :");
    scanf("%d",&sal);
    if(sal<=10000)
    printf("HRA = 20% \n DA = 80% \n");
    else if (sal<=20000)
    printf("HRA = 25% \n DA = 90% \n");
    else if (sal>20000)
    printf("HRA = 30% \n DA = 95% \n");
    
    
    
    return 0;
}

//program to calculate electricity bill
#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}

//number pattern 1
#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++)
    printf("11111\n");
    return 0;
}

//number pattern 2
#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++)
    {
    if(i%2==0)
    printf("11111\n");
    else
    printf("00000\n");
    }
    return 0;
}

//number pattern 3
#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++)
    printf("01010\n");
    return 0;
}

//number pattern 4
#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++)
    {
        if(i==0||i==4)
        printf("11111\n");
        else
        printf("10001\n");
    }
    return 0;
}

//number pattern 5
#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++)
    {
        if(i==2)
        printf("11011\n");
        else
        printf("11111\n");
    }
    return 0;
}

//number pattern 6
#include <stdio.h>

int main()
{
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        printf("10101\n");
        else
        printf("01010\n");
    }
    return 0;
}

