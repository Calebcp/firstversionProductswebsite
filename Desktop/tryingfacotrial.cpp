#include <stdio.h>

int main(){
	int n;
	int factnum;
	int current_number;
	int num;
	printf("Type in a number and we will give you its factorial:\n");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++){
		
		printf("Type in a number and we will give you its factorial:\n");
		scanf("%d", &n);
		n = i*(i-1);
		
		printf("THe ANwser is %d : ", i);
	}
	return 0;
}
	

/*Great start—here’s targeted, non-spoilery advice to fix your logic and syntax (focused on why issues happen, not the final code):
1. Fix the scanf/Input Loop First
You’re asking for input twice: once before the for loop, and again inside the loop. This confuses the program (it keeps changing n mid-loop!). Decide: Do you want to calculate the factorial of a single number (most common for factorials) or multiple numbers?
→ For a single number: Delete the for loop’s inner printf + scanf (keep only the first input step).
2. Factorial Calculation Logic
Factorial is a product of all numbers from 1 to n (e.g., 5! = 5×4×3×2×1). Your current line factnum = (n * (n-1)) only multiplies 2 numbers—you need to build the product over the loop.
→ Initialize factnum to a starting value that won’t break multiplication (hint: multiplying by 1 doesn’t change the product).
→ Update factnum in each loop iteration (e.g., factnum = factnum * [current number]).
3. Loop Counter (i) Mistake
Your for loop starts at i=0—but multiplying by 0 will make the whole product 0 (bad for factorials!).
→ Start the loop at i=1 (or i=2, since 1×n = n) and go up to i=n.
4. Critical Syntax: & in printf
&factnum is the memory address of factnum, not its value. You never want & in printf (only in scanf to tell the program where to store input).
→ Change printf("Here is the number %d", &factnum); to use factnum (no &).
5. Handle the n=0 Case Correctly
if (&n != 0) is wrong: &n is an address (will never be 0). You need to check the value of n (not its address).
→ Use if (n == 0) (since 0! = 1 by definition) instead.
Step-by-Step Action Plan (Try This Order):
Remove the inner printf/scanf from the loop (only ask for input once).
Fix factnum’s initialization and loop update (build the product).
Adjust the loop counter (i) to start at 1.
Remove & from printf for factnum and fix the n=0 check.
You’re close—focus on making the loop build the product instead of just multiplying two numbers, and fix the & mistake! Let me know if you get stuck on a specific step.
 */