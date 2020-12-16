//program to convert decimal to binary
#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i;    
system ("cls");  
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  

//printing all natural numbers from 1 to n
#include<stdio.h>
int main(){
int i,n;
printf("numbers to be printed till-");
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
printf("%d",i);
}
return 0;
}

//printing all natural numbers in reverse
#include<stdio.h>
int main(){
int i,n;
printf("numbers to be printed till-");
scanf("%d",&n);
for(i=n;i>0;i--)
{
printf("%d",i);
}
return 0;
}

//program to print all alphabets from a to z
#include<stdio.h>
int main(){
printf("The alphabets in upper case are:\n");
for(int i=65;i<91;i++)
{
printf("%c",i);
}
printf("\n");
printf("The alphabets in lower case are:\n");
for(int i=97;i<123;i++)
{
printf("%c",i);
}
return 0;
}

//program to print all even numbers from 1 to 100
#include<stdio.h>
int main(){
printf("printing even numbers from 1 to 100 \n");
for(int i=1;i<101;i++)
{
if(i%2==0)
printf("%d \n",i);
}
return 0;
}

//program to all odd numbers from 1 to 100
#include<stdio.h>
int main(){
printf("printing odd numbers from 1 to 100 \n");
for(int i=1;i<101;i++)
{
if(i%2!=0)
printf("%d \n",i);
}
return 0;
}

//program to find sum of all natural numbers from 1 to n
#include<stdio.h>
int main(){
int sum=0,i,n;
printf("enter the number upto which the sum is required \n");
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
sum+=i;
}
printf("the sum of numbers desired is - %d",sum);
return 0;
}

//program to print sum of all even numbers from 1 to n
#include<stdio.h>
int main(){
int sum=0,n,i;
printf("enter the number upto which the sum is required \n");
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
if(i%2==0)
sum+=i;
}
printf("The required sum is - %d",sum);
return 0;
}

//program to print sum of all odd numbers from 1 to n
#include<stdio.h>
int main(){
int sum=0,n,i;
printf("enter the number upto which the sum is required \n");
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
if(i%2!=0)
sum+=i;
}
printf("The required sum is - %d",sum);
return 0;
}

//multiplication table
#include<stdio.h>
int main(){
int mult=1,n,i;
printf("enter the number whose multiplication you want to be printed \n");
scanf("%d",&n);
for(i=1;i<11;i++)
{
mult=i*n;
printf("%d x %d = %d \n",n,i,mult);
}
return 0;
}

//program to count number of digits in a number
#include<stdio.h>
int main(){
int n,i,count=0;
printf("enter number \n");
scanf("%d",&n);
while(n!=0)
{
n/=10;
count+=1;
}
printf("the digits in the number are %d",count);
return 0;
}

//program to find first and last digit of a number
#include<stdio.h>
int main(){
int i,n,t,b;
printf("enter number \n");
scanf("%d",&n);
printf("The last digit is = %d \n",n%10);
while(n!=0)
{
t=n%10;
b=t;
n/=10;
}
printf("The first digit is = %d",b);
return 0;
}

//program to find sum of first and last digit of a number
#include<stdio.h>
int main(){
int i,n,t,b,l;
printf("enter number \n");
scanf("%d",&n);
l=n%10;
while(n!=0)
{
t=n%10;
b=t;
n/=10;
}
printf("The sum of first and last digit is = %d", l+b );
return 0;
}

//program to swap first and last digits of a number
#include <stdio.h>
#include <math.h>

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Find last digit */
    lastDigit  = num % 10;

    /* Find total number of digit - 1 */
    digits     = (int)log10(num); 

    /* Find first digit */
    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d \n", num);
    printf("Number after swapping first and last digit: %d", swappedNum);

    return 0;
}

//program to calculate sum of digits of a number
#include<stdio.h>
int main(){
int num,temp,sum=0;
printf("enter the number: \n");
scanf("%d",&num);
while(num!=0)
{
temp=num%10;
sum+=temp;
num/=10;
}
printf("\n The sum of the digits of given number is = %d ",sum);
return 0;
}

//program to calculate product of digits of a number
#include<stdio.h>
int main(){
int num,temp,mult=1;
printf("enter the number: \n");
scanf("%d",&num);
while(num!=0)
{
temp=num%10;
mult*=temp;
num/=10;
}
printf("\n The product of the digits of given number is = %d ",mult);
return 0;
}

//program to enter a number and print its reverse
#include<stdio.h>
#include<math.h>
int main(){
int num,revnum=0,temp,i,digits;
printf("enter number to be reversed \n");
scanf("%d",&num);
digits= (int)log10(num);
printf("\nthe original number is = %d", num);
for(i=digits;i>=0;i--)
{
temp=num%10;
revnum+=temp*(pow(10,i));
num/=10;
}
printf("\nthe reversed number is = %d",revnum);
return 0;
}

//program to check whether a number is palindrome or not
#include<stdio.h>
#include<math.h>
int main(){
int num,revnum=0,temp,i,digits,t;
printf("enter number \n");
scanf("%d",&num);
t=num;
digits= (int)log10(num);
for(i=digits;i>=0;i--)
{
temp=num%10;
revnum+=temp*(pow(10,i));
num/=10;
}
if(revnum==t)
printf("\nthe number is a palindrome");
else
printf("\nthe number is not a palindrome");
return 0;
}

//program to find frequency of each digit in a given number
#include<stdio.h>
#define BASE 10
int main(){
int num,i,freq[BASE],n,temp;
printf("enter number : \n");
scanf("%d",&num);
n=num;
for(i=0;i<BASE;i++)
{
freq[i]=0;
}
while(n!=0)
{
temp=n%10;
n/=10;
freq[temp]++;
}
printf("the frquencies of digits in number %d is as given below : \n",num);
for(i=0;i<BASE;i++)
{
printf("\nThe frequency of %d in %d is = %d",i,num,freq[i]);
}
return 0;
}

//program to enter a number and print it in words
#include <stdio.h>

int main()
{
    int n, num = 0;

   
    printf("Enter any number to print in words: ");
    scanf("%d", &n);

  
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

   
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;
    }

    return 0;
}

//program to print all ASCII characters with the values
#include <stdio.h>

int main()
{
    int i;

    /* Print ASCII values from 0 to 255 */
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}

//program to find power of a number using for loop
#include<stdio.h>
int main(){
int n,i,exp,mult=1;
printf("enter number \n");
scanf("%d",&n);
printf("enter exponent:\n");
scanf("%d",&exp);
for(i=1;i<=exp;i++)
{
mult*=n;
}
printf("the number %d raised to the exponent %d gives %d",n,exp,mult);
return 0;
}

//program to find all factors of a number
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

//program to calculate factorial of a number
#include<stdio.h>
int main(){
int i ,n,fact=1;
printf("enter number :\n");
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
fact*=i;
}
printf("\nthe factorial of the number is :%d ",fact);
return 0;
}

//program to find hcf of two numbers
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}

//program to find lcm of two numbers 
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in min
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}

//program to check whether a number is prime or not
#include<stdio.h>
int main() {
     int i,n,check=0;
     printf(" enter number \n");
     scanf("  %d",&n);
     for(i=1;i<=n;i++)
           {
              if(n%i==0)
                  {
                     check=1;
                     break;
                  }
           }
     if(n==1)
            printf("1 is neither prime nor composite");
             
      else if (check==0)
            printf(" %d is prime number ",n);
      else  
            printf("%d is a composite number",n);
       return 0;
}

//program to print all prime numbers between 1 and n
#include<stdio.h>
int main()
{
    int n,i,fact,j;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return 0;
}

//program to find sum of all prime numbers between 1 and n
#include<stdio.h>
int main()
{
    int n,i,fact,j,sum=0;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            {
                printf("%d " ,i);
                sum+=i;
            }
    }
    printf("the sum of all prime numbers between 1 and %d is %d",n,sum);
    
    return 0;
}

//program to find all prime factros of a number
int main()
{
    int n,i,fact,j;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime factors of the number are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2 && n%i==0)
            {
                printf("%d " ,i);
                
            }
    }
    
    
    return 0;
}

//program to check whether a number is armstrong or not
#include<stdio.h>
int main()
{
   int num,copy_of_num,sum=0,rem;

   //Store input number in variable num
   printf("\nEnter a number:");
   scanf("%d",&num);

   /* Value of variable num would change in the
      below while loop so we are storing it in 
      another variable to compare the results 
      at the end of program
   */
   copy_of_num = num;

   /* We are adding cubes of every digit
    * and storing the sum in variable sum
    */ 
   while (num != 0)
   {
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      num = num / 10;
   }

   /* If sum of cubes of every digit is equal to number
    * itself then the number is Armstrong
    */
   if(copy_of_num == sum)
      printf("\n%d is an Armstrong Number",copy_of_num);
   else
      printf("\n%d is not an Armstrong Number",copy_of_num);
   return(0);
}


/*C program to print all Armstrong Numbers from 1 to N. */
 
#include <stdio.h>
 
/*function to check Armstrong Number */
int checkArmstrong(int num){
    int tempNumber,rem,sum;
    tempNumber=num;
 
    sum=0;
    while(tempNumber!=0)
    {
        rem=tempNumber%10;
        sum=sum + (rem*rem*rem);
        tempNumber/=10;
    }  
/* checking number is Armstrong or not */
  if(sum==num)  
      return 1;
  else
      return 0;
}
 
int main()
{
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("All Armstrong numbers from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(checkArmstrong(i))
            printf("%d,",i);
    }
     
    return 0;
}

//program to check if a number is perfect or not
#include <stdio.h>
int main() {
    int num, i,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i < num; ++i) {
        if (num % i == 0 ) {
            printf("%d ", i);
            sum+=i;
        }
    }
    if(sum==num)
    printf("\n%d is a perfect number",num);
    else
    printf("\n%d is not a perfect number",num);
    return 0;
}

//program to print all perfect numbers from 1 to n
#include<stdio.h>
int checkperfectnum(int num){
int i,sum=0;
for (i = 1; i < num; ++i) {
        if (num % i == 0 ) {
            
            sum+=i;
        }
    }
    if(sum==num)
    return 1;
    else
    return 0;
    }

int main(){
int n,i;
printf("enter range:\n");
scanf("%d",&n);
printf("\n the perfect numbers from 1 to %d are as follows : ",n);
for(i=1;i<=n;i++){
if(checkperfectnum(i))
printf("%d",i);
}
return 0;
}

//program to check if a number is strong or not
#include<stdio.h>
int main(){
int num,i,sum=0,copy_num,fact,temp;
printf("enter number to be checked\n");
scanf("%d",&num);
copy_num=num;
while(num!=0)
{
temp=num%10;
fact=1;
for(i=1;i<=temp;i++)
{
fact*=i;
}
sum+=fact;
num/=10;
}
if(sum==copy_num)
printf("\n%d is a strong number",copy_num);
else
printf("\n%d is not a strong number",copy_num);
return 0;
} 

//program to print all strong numbers between 1 and n
#include<stdio.h>
int checkstrong_num(int num){
int i,sum=0,copy_num,fact,temp;
copy_num=num;
while(num!=0)
{
temp=num%10;
fact=1;
for(i=1;i<=temp;i++)
{
fact*=i;
}
sum+=fact;
num/=10;
}
if(sum==copy_num)
return 1;
else
return 0;
} 
int main(){
int n,i;
printf("enter range:\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(checkstrong_num(i))
printf("%d",i);
}
return 0;
}

//program to print fibonacci series upto n terms
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

//program to find 1s complement of a binary number
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i;
	
	char num[8], one_comp[8];
	
	printf("Enter the binary number\n");
	gets(num);
	
	for(i = 0; i < 8; i++)
	{
	    if(num[i] == '0'){
	        one_comp[i] = '1';
	    }
	    else if(num[i] == '1') {
	        one_comp[i] = '0';
	    }
	}
	
	
	printf("Ones' complement of binary number %s is %s\n",num, one_comp);
	return 0;
}


//proram to convert binary to octal
#include <math.h>
#include <stdio.h>
int convert(long long bin);
int main() {
    long long bin;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);
    printf("%lld in binary = %d in octal", bin, convert(bin));
    return 0;
}

int convert(long long bin) {
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

//program to convert binary to decimal
#include <math.h>
#include <stdio.h>
int convert(long long bin);
int main() {
    long long bin;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);
    printf("%lld in binary = %d in decimal", bin, convert(bin));
    return 0;
}

int convert(long long bin) {
    int  dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
return dec;
}

//program to convert binary to hexadecimal
#include<math.h>
#include<stdio.h>
int convert(long long bin);
int main(){
       long long bin;
       printf("enter a binary number :");
       scanf("%lld",&bin);
       printf("%lld in binary = %d in hexadecimal",bin,convert(bin));
       return 0;
          }

int convert(long long bin){
       int dec=o,i=0,hd=0;
       //converting binary into decimal
       while(bin){
            dec+=(bin%10)*pow(2,i);
            i++;
            bin/=10;
                 }
        i=1;
       //converting decimal into hexadecimal
       while(dec){
            hd+=(dec%16)*i;
            dec/=16;
            i*=10;
                 }
       return hd;
   }

//program to convert octal to binary
#include<stdio.h>
#include<math.h>
long convert(int oct);
int main(){
        int oct;
        printf("enter an octal number :");
        scanf("%d",&oct);
        printf("%d in octal = %ld in binary",oct,convert(oct));
        return 0;
          }
long convert(int oct){
        int dec=0,i=1;
        long  bin;
        while(oct){
              dec+= (oct%10)*pow(8,i);
              oct/=10;
              i++;
                  }
         i=1;
        while(dec){
              bin+= (dec%2)*i;
              dec/=2;
              i*=10;
                   }
        return bin;
          }

//program to convert octal to decimal
#include<stdio.h>
#include<math.h>
int convert(int oct);
int main(){
int oct;
printf("enter an octal number: ");
scanf("%d",&oct);
printf("%d in octal = %d in decimal",oct,convert(oct));
return 0;
}
int convert(int oct){
int dec=0,i=0;
while(oct){
dec+=(oct%10)*pow(8,i);
i++;
oct/=10;
}
return dec;
}

//program to convert octal to hexadecimal
#include<stdio.h>
#include<math.h>
int convert(int oct);
int main(){
int oct;
printf("enter an octal number : ");
scanf("%d",&oct);
printf("%d in octal = %d in hexadecimal",oct,convert(oct));
return 0;
}
int convert(int oct){
int hd=0,dec=0,i=0;
while(oct){
dec+=(oct%10)*pow(8,i);
i++;
oct/=10;
}
i=1;
while(dec){
hd+=(dec%16)*i;
dec/=16;
i*=10;
}
return hd;
}

//program to convert decimal to octal
#include<stdio.h>
#include<math.h>
int convert(int dec);
int main(){
int dec;
printf("enter a decimal number: ");
scanf("%d",&dec);
printf("%d in decimal=%d in octal",dec,convert(dec));
return 0;
}
int convert(int dec){
int oct=0,i=1;
while(dec){
oct+=(dec%8)*i;
dec/=8;
i*=10;
}
return oct;
}

//program to convert decimal to hexadecimal
#include<stdio.h>
#include<math.h>
int convert(int dec);
int main(){
int dec;
printf("enter a decimal number: ");
scanf("%d",&dec);
printf("%d in decimal=%d in hexadecimal",dec,convert(dec));
return 0;
}
int convert(int dec){
int hd=0,i=1;
while(dec){
hd+=(dec%16)*i;
dec/=16;
i*=10;
}
return hd;
}

//program to convert hexadecimal to binary
#include<stdio.h>
#include<math.h>
long convert(int hd);
int main(){
int hd;
printf("enter a hexadecimal number: ");
scanf("%d",&hd);
printf("%d in hexadecimal=%ld in binary",hd,convert(hd));
return 0;
}

long convert(int hd){
int dec=0,i=0;
while(hd){
dec+=(hd%10)*pow(16,i);
i++;
hd/=10;
}
i=1;
long bin;
while(dec){
bin+=(dec%2)*i;
dec/=2;
i*=10;
}
return bin;
}

//program to convert hexadecimal to octal
#include<stdio.h>
#include<math.h>
int convert(int hd);
int main(){
int hd;
printf("enter a hexadecimal number: ");
scanf("%d",&hd);
printf("%d in hexadecimal = %d in octal ",hd,convert(hd));
return 0;
}
int convert(int hd){
int dec=0,i=0;
while(hd){
dec+=(hd%10)*pow(16,i);
i++;
hd/=10;
}
i=1;
int oct=0;
while(dec){
oct+=(dec%8)*i;
dec/=8;
i*=10;
}
return oct;
}

//program to convert hexadecimal to decimal
#include<stdio.h>
#include<math.h>
int convert(int hd);
int main(){
int hd;
printf("enter a hexadecimal number: ");
scanf("%d",&hd);
printf("%d in hexadecimal = %d in decimal ",hd,convert(hd));
return 0;
}
int convert(int hd){
int dec=0,i=0;
while(hd){
dec+=(hd%10)*pow(16,i);
i++;
hd/=10;
}
return dec;
}


/*star pattern programs 
pyramid star pattern*/
#include<stdio.h>
int main(){
int i,j,n,k;
printf("Enter no of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<(2*i+1);j++)
{
    
    printf("*");
}
printf("\n");
}
return 0;
}

//hollow pyramid star pattern
#include<stdio.h>
int main(){
int i,j,n,k;
printf("Enter no of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<(2*i+1);j++)
{
    if(j==0||j==(2*i))
    printf("*");
    else
    printf(" ");
}
printf("\n");
}
for(k=0;k<(2*n+1);k++)
{
    printf("*");
    
}
return 0;
}

//inverted pyramid star pattern
#include<stdio.h>
int main(){
int i,j,n;
printf("Enter no of rows: ");
scanf("%d",&n);
for(i=n;i>=0;i--)
{
for(j=(2*i+1);j>0;j--)
{
   printf("*");
}

printf("\n");
}

return 0;
}

//hollow inverted star pattern
#include<stdio.h>
int main(){
int i,j,n,k;
printf("Enter no of rows: ");
scanf("%d",&n);
for(k=(2*n);k>0;k--)
{
    printf("*");
}
for(i=n;i>=0;i--)
{
for(j=(2*i+1);j>0;j--)
{  if(j==(2*i+1)||j==1)
   printf("*");
   else
   printf(" ");
}

printf("\n");
}


return 0;
}

//half diamond star pattern
#include<stdio.h>
int main(){
int i,j,n,k;
printf("Enter no of rows: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{  
   printf("*");
}

printf("\n");

}

for(i=n;i>0;i--)
{
for(k=i;k>0;k--)
{  
   printf("*");
}

printf("\n");

}


return 0;
}

//printing triangle
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf(" ");
            
        }
        for(k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
        
            
        }
        return 0;
    }

//printing diamond
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf(" ");
            
        }
        for(k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
        
            
        }
        for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            printf(" ");
            
        }
        for(k=2*(n-1)-1;k>=2*i-1;k--){
            printf("*");
        }
        printf("\n");
        
            
        }
        return 0;
    }

//printing hollow triangle
#include<stdio.h>
int main(){
    int i,j,k,l,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            
            printf(" ");
            
        }
        for(k=0;k<2*i-1;k++){
            if(k==0 || k==(2*i-2))
            printf("*");
            else
            printf(" ");
        }
        
        printf("\n");
        
            
        }
        for(l=0;l<2*n+1;l++)
        {
            printf("*");
        }
       
        return 0;
    }

//printing reverse triangle
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            printf(" ");
            
        }
        for(k=2*n-1;k>=2*i-1;k--){
            printf("*");
        }
        printf("\n");
        
            
        }
        return 0;
    }

//program to print inverted hollow triangle
#include<stdio.h>
int main(){
    int i,j,k,l,n;
    printf("enter number of rows ");
    scanf("%d",&n);
     printf(" ");
    for(l=1;l<=2*n+1;l++)
    {
        
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            printf(" ");
            
        }
       
        for(k=2*n-1;k>=2*i-1;k--){
            if(k==2*n-1 || k==2*i-1)
            printf("*");
            else
            printf(" ");
        }
        
        
        printf("\n");
        
            
        }
        return 0;
    }


/*C function exercises
program to find cube of any number*/
#include <stdio.h>
int cube(int n);
int main(){
    int num;
    printf("enter number to be cubed = ");
    scanf("%d",&num);
    printf("The cube of %d is %d",num,cube(num));
    return 0;
}
int cube(int n){
    int cube;
    cube=(n*n*n);
    return cube;
}

//program to find diameter , circumferance and area
#include <stdio.h>
float calccfc(int n);
float calcarea(int n);
int main(){
    int num;
    printf("enter radius = ");
    scanf("%d",&num);
    printf("The circumferance of circle having radius %d is %f \n",num,calccfc(num));
    printf("The area of circle having radius %d is %f",num,calcarea(num));
    return 0;
}
float calccfc(int n){
    float cfc;
    cfc=2*3.14*n;
    return cfc;
}
float calcarea(int n){
    float area;
    area=3.14*n*n;
    return area;
}

//program to find maximun and minimum between two numbers
#include<stdio.h>
int max(int n1, int n2);
int min(int n1, int n2);
int main(){
int n1,n2;
printf("enter two numbers to be compared = ");
scanf("%d %d",&n1,&n2);
printf("The max among the numbers is %d and the minimum is %d",max(n1,n2),min(n1,n2));
return 0;
}
int max(int n1,int n2){
if(n1>n2)
return n1;
else
return n2;
}
int min(int n1,int n2){
if(n1<n2)
return n1;
else 
return n2;
}


















 









