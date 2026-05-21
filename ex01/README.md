# ex01 - PhoneBook

## Subject Summary
Create a simple contact management system with a PhoneBook class that stores up to 8 contacts. Support ADD, SEARCH, and EXIT commands.

## Logic Explanation

### Contact Class
- **Private members**: Store first name, last name, nickname, phone number, and darkest secret as strings.
- **Setters**: Methods to set each field.
- **Getters**: Methods to retrieve each field (marked const to prevent modification).

### PhoneBook Class
- **Array of Contacts**: Stores 8 Contact objects.
- **Index**: Tracks the next available slot (using modulo 8 to wrap around).

### ADD Command
1. Prompt for each field (first name, last name, nickname, phone, secret).
2. Validate that fields are not empty.
3. Store contact at current index (modulo 8 for wrapping).
4. Increment index.

### SEARCH Command
1. Display a formatted table showing all contacts (truncate fields longer than 10 characters).
2. Prompt for an index.
3. Validate the index (single digit, 0-7).
4. Display full details of the selected contact if it exists.

### Main Loop
- Read commands from user (ADD, SEARCH, EXIT).
- Execute corresponding PhoneBook methods.
- Exit when user enters "EXIT".

## Key Concepts
- Class design (encapsulation)
- Object arrays
- String manipulation
- Input/output with formatting (`std::setw`)
- Command parsing