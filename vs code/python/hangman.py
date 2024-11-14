import random

# Word list
WORDS = [
    "algorithm", "function", "variable", "compile", "iterate",
    "recursion", "binary", "array", "syntax", "pointer"
]

# Function to display HANGMAN header with pointer
def display_hangman_header(errors):
    header = "HANGMAN"
    pointer_position = min(errors, len(header) - 1)
    pointer = "^".rjust(pointer_position + 1)
    print(header)
    print(pointer)

# Function to select a random word from the list
def select_random_word():
    return random.choice(WORDS)

# Function to display the current progress of the guessed word
def display_word_progress(word, guessed_letters):
    display = ''.join([letter if letter in guessed_letters else '_' for letter in word])
    print(f"Word: {display}")

# Function to check if the input is valid
def is_valid_input(user_input):
    return len(user_input) == 1 and user_input.isalpha()

# Main game function
def hangman_game():
    while True:
        word = select_random_word()
        guessed_letters = set()
        incorrect_guesses = 0
        max_errors = len("HANGMAN")

        print("\nWelcome to HANGMAN!")
        display_hangman_header(incorrect_guesses)

        while incorrect_guesses < max_errors:
            display_word_progress(word, guessed_letters)
            guess = input("Guess a letter: ").lower()

            if not is_valid_input(guess):
                print("Invalid input. Please enter a single alphabetic character.")
                continue

            if guess in guessed_letters:
                print("You already guessed that letter. Try again.")
                continue

            guessed_letters.add(guess)

            if guess in word:
                if set(word).issubset(guessed_letters):
                    display_word_progress(word, guessed_letters)
                    print("Phew… you are saved!")
                    break
            else:
                incorrect_guesses += 1
                display_hangman_header(incorrect_guesses)
                if incorrect_guesses == max_errors:
                    print("You are hanged. The word was:", word)

        play_again = input("Do you want to play again? (y/n): ").lower()
        if play_again != 'y':
            break

if __name__ == "__main__":
    hangman_game()
