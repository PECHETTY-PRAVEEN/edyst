/*
Dr. CooCoo has a new obsession: crazy numbers. A number is crazy if it is either a multiple of 13 or if it is one more than a multiple of 13.

Write a method Met that takes as parameter an integer and prints Crazy if a number is crazy. Otherwise it prints Not Crazy.

The Met method has to be inside a Solution class. Please check the code editor for the ideal method definition.

Use the System.out.println() statement for printing.

Example Input: 13
Output: Crazy
Example Input: 27
Output: Crazy
Example Input: 42
Output: Not Crazy
*/
struct Solution {
  void Met(int num1) {
      /* write your solution here */
      if(num1%13==0||(num1-1)%13==0)
      cout<<"Crazy"<<"\n";
      else
         cout<<"Not Crazy"<<"\n";
  }
};
