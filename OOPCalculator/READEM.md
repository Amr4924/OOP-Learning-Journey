# OOP Calculator

A simple yet powerful calculator application built using Object-Oriented Programming principles in C++. This project demonstrates fundamental OOP concepts including classes, encapsulation, and method implementation.

## 📋 Project Overview

This calculator application provides basic arithmetic operations (addition, subtraction, multiplication, and division) using a class-based approach. The project showcases clean code organization and proper OOP design patterns.

## 🔧 Features

- **Basic Arithmetic Operations**:
  - Addition (+)
  - Subtraction (-)
  - Multiplication (×)
  - Division (÷)

- **OOP Implementation**:
  - `Process` class encapsulating calculator logic
  - Constructor-based initialization
  - Method-based operations
  - Data encapsulation with private members

- **User Interface**:
  - Interactive menu system
  - Input validation
  - Clear result display
  - Error handling for invalid inputs

- **Additional Features**:
  - Division by zero protection
  - Input type validation
  - Auto-launch developer portfolio

## 🏗️ Class Structure

### `Process` Class
```cpp
class Process {
    private:
        double num1, num2;  // Encapsulated data members
    
    public:
        Process(double, double);    // Constructor
        double addition();          // Addition method
        double subtraction();       // Subtraction method
        double multi();            // Multiplication method
        double division();         // Division method (with zero check)
};
```

## 🚀 Getting Started

### Prerequisites
- C++ compiler (GCC, Visual Studio, or any C++11 compatible compiler)
- Windows operating system (for system commands)

### Building and Running

#### Using g++ (MinGW/GCC):
```powershell
g++ -std=c++11 oop4.cpp -o calculator.exe
.\calculator.exe
```

#### Using Visual Studio:
```powershell
cl /EHsc oop4.cpp
oop4.exe
```

#### Using Dev-C++ or Code::Blocks:
1. Open `oop4.cpp` in your IDE
2. Build and run the project (F9 or F10)

## 💻 Usage Example

```
Enter two numbers: 15 3

[1] Collection process
[2] Subtraction process  
[3] Multiplication process
[4] Division process

Choose the operation: 1

-------------- Results --------------
Result: 15 + 3 = 18
______________ ------- ______________
```

## 🎯 OOP Concepts Demonstrated

1. **Encapsulation**: 
   - Private data members (`num1`, `num2`)
   - Public interface methods

2. **Constructor Usage**:
   - Parameterized constructor for object initialization
   - Proper member initialization

3. **Method Implementation**:
   - Separate methods for each operation
   - Return value methods
   - Inline method definitions

4. **Error Handling**:
   - Division by zero protection
   - Input validation functions

## 🔍 Code Highlights

### Input Validation Function
```cpp
bool is_number(string str) {
    for (char c : str) {
        if (c < '0' || c > '9') return false;
    }
    return true;
}
```

### Safe Division Implementation
```cpp
double division() {
    if (num2 == 0) return 0;
    else return num1 / num2;
}
```

## 🛠️ Potential Improvements

- Add more advanced operations (power, square root, etc.)
- Implement operator overloading
- Add floating-point number validation
- Create a GUI version using Qt or similar framework
- Add history/memory functions
- Implement exception handling instead of return values

## 📚 Learning Outcomes

This project helps understand:
- Basic OOP principles in C++
- Class design and implementation
- Constructor usage
- Method organization
- Input validation techniques
- Error handling strategies

## 🤝 Contributing

Feel free to contribute by:
- Adding new mathematical operations
- Improving error handling
- Enhancing the user interface
- Adding unit tests
- Optimizing performance

## 📝 License

This project is part of the OOP Projects Collection and is licensed under the MIT License.

## 📞 Contact

- **GitHub**: [https://github.com/Amr4924](https://github.com/Amr4924)
- **Portfolio**: [https://amr4924-github-io.vercel.app/](https://amr4924-github-io.vercel.app/)
- **LinkedIn**: [https://www.linkedin.com/in/amrsa3dwy/](https://www.linkedin.com/in/amrsa3dwy/)

---

**Educational Purpose**: This calculator serves as a practical example of implementing Object-Oriented Programming concepts in a real-world application. Perfect for beginners learning OOP in C++!
