/* Assignment 6 */
// 1. Write a program to calculate sum of first N natural numbers
// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter N:: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//      printf("Sum = %d",sum);
//     return 0;
// }

// 2. Write a program to calculate sum of first N even natural numbers
// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter N:: ");
//     scanf("%d",&n);
//    for (int i = 1; i <= n; i++)
//    {
//     if (i%2==0)
//     {
//         sum = sum + i;
//     }
//    }
//    printf("Sum = %d",sum);
//     return 0;
// }

// 3. Write a program to calculate sum of first N odd natural numbers
// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter N:: ");
//     scanf("%d",&n);
//    for (int i = 1; i <= n; i++)
//    {
//     if (i&1)
//     {
//         sum = sum + i;
//     }
//    }
//    printf("Sum = %d",sum);
//     return 0;
// }

// 4. Write a program to calculate sum of squares of first N natural numbers
// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter n:: ");
//     scanf("%d",&n);
//     for (int i = 0; i <= n; i++)
//     {
//         sum = sum + i*i;
//     }
//     printf("Sum = %d",sum);

//     return 0;
// }

// 5. Write a program to calculate sum of cubes of first N natural numbers
// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter n:: ");
//     scanf("%d",&n);
//     for (int i = 0; i <= n; i++)
//     {
//         sum = sum + i*i*i;
//     }
//     printf("Sum = %d",sum);

//     return 0;
// }

// 6. Write a program to calculate factorial of a number
// #include <stdio.h>
// int main()
// {
//     int n,fact=1;
//     printf("Enter a number:: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("Fact = %d",fact);

//     return 0;
// }

// 7. Write a program to count digits in a given number
// #include <stdio.h>
// int main()
// {
//       int num;
//       printf("Enter number:: ");
//       scanf("%d",&num);
//       int i = 0;
//       while (num > 0)
//       {
//             num = num / 10;
//             i++;
//       }
//       printf("Total number of Digit = %d",i);
//       return 0;
// }


// 8. Write a program to check whether a given number is a Prime number or not
// #include <stdio.h>
// int main()
// {
//       int num;
//       int prime = 0;
//       printf("Enter number:: ");
//       scanf("%d", &num);
//       for (int i = 2; i < num; i++)
//       {
//             if (num % i == 0)
//             {
//                   prime++;
//                   break;
//             }
//       }
//       if (prime == 0)
//       {
//             printf("%d is a prime number.", num);
//       }
//       else
//       {
//             printf("%d is not a prime number.", num);
//       }
//       return 0;
// }

// 9. Write a program to calculate LCM of two numbers
// #include <stdio.h>
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers:: ");
//     scanf("%d%d",&num1,&num2);
//     for (int i = 1; i <= num1*num2; i++)
//     {
//         if ((i%num1==0) && (i%num2==0))
//         {
//             printf("LCM od (%d,%d) is %d.",num1,num2,i);
//             break;
//         }
//     }
//     return 0;
// }

// 10. Write a program to reverse a given number
// #include <stdio.h>
// int main()
// {
//       int num;
//       printf("Enter a number:: ");
//       scanf("%d",&num);
//       int temp = 0;
//       int i = 1;
//       while (num > 0)
//       {
//             temp = temp*10 + num%10;
//             num = num/10;
//             i++;
//       }
//       printf("Digit = %d\n",i-1);
//       printf("Reversed number = %d",temp);

//       return 0;
// } 
