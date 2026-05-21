# ex00 - megaphone

## Subject Summary
Convert command-line arguments to uppercase and output them. If no arguments are provided, output a default noise message.

## Logic Explanation

1. **Check if any arguments exist**: If `argc == 1`, print the default noise message `"* LOUD AND UNBEARABLE FEEDBACK NOISE *"` and exit.

2. **Convert arguments to uppercase**: Loop through each argument starting from `argv[1]`, convert each character using `std::toupper()`, and output them.

3. **Format output**: Separate arguments with a single space, and end with a newline.

## Key Concepts
- Command-line arguments handling (`argc`, `argv`)
- Character case conversion (`std::toupper`)
- String output with proper formatting