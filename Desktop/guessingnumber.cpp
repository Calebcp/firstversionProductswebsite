#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a , b, c, random_number;
	a =1;
	b =50;
	srand(time(0));
	
	random_number = rand() % (b-a+1) + a;
	printf("Guess the Correct number between 1-50!\n I will tell you if you are too high or too low!\n");
	printf("Random number between %d and %d is %d\n", a, b, random_number);
	
	int game_over = 0;
    while (game_over == 0) {
	printf("Enter your guess('0' to Quit): ");
	scanf("%d", &c);
	
	if (c == 0){
		printf("Thanks for playing! See you next time!\n");
		game_over = 1;
		continue;
	}
	
	if (c>50 || c<1) {
		printf("Not within 1-50!\n");
	}
	else if (c==random_number) {
		printf("Correct!\n");
		game_over = 1;
	}
	else if (c > random_number - 4 && c < random_number + 4) {
            printf("You are Very close!\n");
       	
	}
	else if (c < random_number){
		if (random_number - 10){
			printf("Too Low\n");
		}else {
			printf("You are Close!\n");
		}
	}
	else if (c > random_number){
		if (random_number + 10){
			printf("Too High\n");
		}else {
			printf("You are close!\n");
		}
		
	}
}
	return 0;
}




	

/*# Step-by-Step Guide to Build a "Guess the Number (1-50)" Program  
	This guide breaks down the process of creating a user-friendly guess-the-number game—focused on logic, user interaction, and error handling—with no code, just actionable, detailed steps.
	
	
	## **1. Define Core Requirements (What the Program Must Do)**  
	First, lock in the non-negotiable features to keep the project focused:  
	- The program selects a **fixed, random secret number** between 1 and 50 (inclusive) at the start.  
	- The user guesses numbers until they match the secret number (unlimited attempts).  
	- After each guess:  
	  - Confirm if the guess is *too high*, *too low*, or *correct*.  
	- Reject invalid inputs (non-numbers, numbers outside 1–50) with clear error messages.  
	- End only when the user guesses correctly (no early exit unless the user quits—optional, but we’ll keep it simple with "guess until correct").
	
	
	## **2. Map the Full User Journey**  
	Outline every interaction the user will have with the program to ensure a smooth flow:  
	1. Program launches → Generates the secret number (1-50) *once* (critical—don’t regenerate it mid-game!).  
	2. Displays a welcome message that explains the rules (e.g., "Welcome to Guess the Number! I’m thinking of a number between 1 and 50. Guess it, and I’ll tell you if you’re too high, too low, or spot-on!").  
	3. Prompts the user for their first guess (e.g., "Enter your guess: ").  
	4. Checks if the input is valid (see Step 4).  
	5. If invalid → Shows an error message → Returns to Step 3 to ask for a new guess.  
	6. If valid → Compares the guess to the secret number:  
	   - If guess ≠ secret number → Shows "Too high!" or "Too low!" → Returns to Step 3.  
	   - If guess = secret number → Shows a celebration message (e.g., "Congratulations! You guessed the number correctly!") → Ends the program.
	
	
	## **3. Break Down Key Functional Components**  
	Split the program into small, manageable tasks (each task is a "building block" you’ll implement):  
	
	### **Component 1: Generate the Secret Number (1-50)**  
	- **Goal**: Create a single random integer between 1 and 50 that doesn’t change during the game.  
	- **Key Details**:  
	  - Most programming languages have a "random number generator" (RNG) that produces values between 0 and a maximum (e.g., 0 to 49). To adjust this to 1–50:  
	    - Take the RNG output, use the modulo operator (`%`) with 50 to get a value between 0 and 49.  
	    - Add 1 to shift the range to 1–50.  
	  - Ensure the RNG is "seeded" (if required by your language) to avoid getting the same sequence of secret numbers every time the program runs (e.g., seed with the current time).  
	  - Generate this number *before* the user starts guessing (not inside the loop—otherwise, the target changes mid-game!).
	
	### **Component 2: Capture User Input**  
	- **Goal**: Get the user’s guess as a number (not text) so you can compare it to the secret number.  
	- **Key Details**:  
	  - Use a input function that reads numeric values (e.g., integers) from the user.  
	  - Store the guess in a variable (e.g., `user_guess`) to use in comparisons.  
	
	### **Component 3: Validate User Input**  
	- **Goal**: Reject invalid guesses and guide the user to enter a valid one.  
	- **Validation Checks (Must Do Both)**:  
	  1. **Is the input a number?** → Reject text (e.g., "fifteen"), symbols (e.g., "!@#"), or empty input.  
	  2. **Is the number within 1–50?** → Reject numbers less than 1 (e.g., 0, -3) or greater than 50 (e.g., 51, 100).  
	- **Error Handling**:  
	  - If either check fails, print a clear error message (e.g., "Oops! That’s not valid. Please enter a whole number between 1 and 50.").  
	  - After the error message, immediately prompt the user for a new guess (don’t end the program).
	
	### **Component 4: Compare Guess to Secret Number**  
	- **Goal**: Give the user accurate feedback to guide their next guess.  
	- **Comparison Logic**:  
	  - If `user_guess > secret_number` → Print "Too high! Try again."  
	  - If `user_guess < secret_number` → Print "Too low! Try again."  
	  - If `user_guess == secret_number` → Print a success message (e.g., "Wow, you got it! The secret number was [secret_number]!") → Exit the loop/program.  
	
	### **Component 5: Loop Until Correct Guess**  
	- **Goal**: Repeat the "input → validate → feedback" cycle until the user guesses correctly.  
	- **Loop Choice**:  
	  - Use a "loop that runs forever until a condition is met" (e.g., a `while` loop with `true` as the condition, or a `do-while` loop that runs at least once).  
	  - The loop only exits when the user’s guess matches the secret number (use a `break` statement or set a loop-ending flag).
	
	
	## **4. Handle Edge Cases (Avoid Bugs!)**  
	Plan for scenarios that could break the program or confuse the user:  
	- **Non-numeric input**: If the user enters "abc" or "twenty", the program should not crash—just show an error and re-prompt.  
	- **Extreme values**: Reject 0, negative numbers, or numbers over 50 (e.g., 1000) with the same error message.  
	- **Duplicate guesses**: No need to handle this—let the user guess the same number multiple times (they’ll get the same feedback, which is fine).  
	- **Leading/trailing spaces**: If the user enters " 25 " (with spaces), ensure the program still recognizes it as 25 (trim spaces if needed).
	
	
	## **5. Polish the User Experience (Optional but Impactful)**  
	Make the program feel intuitive and friendly with small tweaks:  
	- Use clear, conversational messages (avoid technical jargon).  
	- Add spacing between prompts/feedback (e.g., a blank line after each error or feedback message) to avoid clutter.  
	- In the success message, include the secret number (e.g., "Great job! The number was 37!") to confirm the guess was correct.  
	- (Advanced) Add a guess counter (e.g., "You guessed in 4 tries!") to make the game more engaging.
	
	
	## **6. Test the Logic (Before Implementing)**  
	Walk through test scenarios to ensure your plan works—this catches flaws early:  
	
	### **Test Scenario 1: Correct Guess on First Try**  
	- Secret number = 12.  
	- User enters 12 → Program prints success message → Ends.  
	
	### **Test Scenario 2: Multiple Guesses (Too High/Too Low)**  
	- Secret number = 35.  
	- User enters 40 → "Too high! Try again."  
	- User enters 30 → "Too low! Try again."  
	- User enters 35 → Success message → Ends.  
	
	### **Test Scenario 3: Invalid Inputs**  
	- User enters "abc" → Error: "Oops! That’s not valid. Please enter a whole number between 1 and 50."  
	- User enters 60 → Same error.  
	- User enters -2 → Same error.  
	- User enters 25 → Valid → Proceed to feedback.  
	
	### **Test Scenario 4: Duplicate Guesses**  
	- Secret number = 8.  
	- User enters 5 → "Too low!"  
	- User enters 5 again → "Too low!" (no problem—program works as expected).
	
	
	## **Final Pre-Implementation Checklist**  
	Before writing any code, confirm you’ve planned for everything:  
	- [ ] Secret number is random (1-50) and generated once.  
	- [ ] Welcome message explains the rules.  
	- [ ] Input is captured as a number.  
	- [ ] Input is validated (numeric + 1-50) with error messages.  
	- [ ] Feedback is clear ("too high"/"too low"/"correct").  
	- [ ] Loop repeats until correct guess.  
	- [ ] Edge cases (invalid inputs) are handled without crashing.  
	- [ ] User messages are friendly and easy to understand.  
	
	Follow these steps, and you’ll build a robust, user-friendly guess-the-number program!*/