# MAC Address Validator in C++

## 📌 About the Project
The **MAC Address Validator** is a simple C++ program that checks whether a given MAC address follows the correct format. It validates the address length, hexadecimal characters, and separator consistency.

## ✨ Features
- Validates MAC address format.
- Supports colon (`:`) and hyphen (`-`) separators.
- Checks hexadecimal characters (`0–9`, `A–F`, `a–f`).
- Detects incorrect length and mixed separators.
- Allows multiple addresses to be checked in one execution.
- Displays clear validation results.

## 🛠️ Technologies Used
- **Language:** C++
- **Concepts:** Functions, loops, conditional statements, strings, and character validation.

## 📋 Valid MAC Address Formats
- `00:1A:2B:3C:4D:5E`
- `AA-BB-CC-DD-EE-FF`

## ❌ Invalid Examples
- `00:1A:2B:3C:4D` — Incorrect length.
- `00:1A:2B:3C:4D:5G` — Invalid hexadecimal character.
- `00:1A-2B:3C-4D:5E` — Mixed separators.

## 🚀 How to Run

1. Clone or download this repository.
2. Open the `.cpp` file in Dev-C++, VS Code, or another C++ IDE.
3. Compile and run the program.

Using a terminal with a C++ compiler:

```bash
g++ mac_validator.cpp -o mac_validator
```

Run on Windows:

```bash
mac_validator.exe
```

## 💻 Sample Output

```text
=====================================
        MAC ADDRESS VALIDATOR
=====================================
Enter MAC Address: 00:1A:2B:3C:4D:5E

-------------------------------------
          VALIDATION RESULT
-------------------------------------
MAC Address : 00:1A:2B:3C:4D:5E
Status      : VALID
Message     : Correct MAC address format.
-------------------------------------
```

## 🎯 Learning Objectives
- Understand MAC address formatting.
- Practice string manipulation in C++.
- Apply conditional statements and loops.
- Develop basic input-validation skills.

## ⚠️ Limitation
This program checks the **format** of a MAC address only. It does not verify the device, manufacturer, or network activity associated with the address.

## 👩‍💻 Author
Sanjana Mallick

## 📄 License
This project is open-source and available for educational purposes.
