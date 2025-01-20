// for (i = 1; i <= n; i++)
// {
//     printf("Bibash");
// }

#include <stdio.h>

int main()
{
   char str[100];
   int length = 0, isPalindrome = 1;

   // Prompt the user for input
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);

   // Calculate the length of the string manually (ignoring the newline character)
   while (str[length] != '\0')
   {
      if (str[length] == '\n')
      {
         str[length] = '\0'; // Replace newline with null terminator
         break;
      }
      length++;
   }

   // Check if the string is a palindrome
   for (int i = 0; i < length / 2; i++)
   {
      if (str[i] != str[length - i - 1])
      {
         isPalindrome = 0;
         break;
      }
   }

   // Output the result
   if (isPalindrome)
   {
      printf("The string is a palindrome.\n");
   }
   else
   {
      printf("The string is not a palindrome.\n");
   }

   return 0;
}
