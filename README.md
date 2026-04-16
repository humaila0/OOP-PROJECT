# Coffee Vending Machine System

A simple console-based Coffee Vending Machine simulation, written in C++. This project provides a real-world simulation of a coffee vending machine, supporting different types of coffee, payment handling, and ingredient refilling.

## Features

- **Multiple Coffee Types:** Choose from American (Coldbrew, Expresso) or Turkish (Capicanno, Latte).
- **Resource Management:** Tracks and manages cups, milk, coffee beans, and sugar in the machine.
- **Refill Capability:** Option for staff to refill ingredients if they run out.
- **Payment Simulation:** Handles payment for selected coffee, calculates change, and denies sale if funds are insufficient.
- **Customizable Orders:** Allows ordering multiple cups and sugar-free options.
- **Inventory Display:** Check ingredient levels and remaining items at any time.

## OOP Concepts Used

This project serves as a practical demonstration of several Object-Oriented Programming principles:

### 1. **Classes & Objects**
- The project defines multiple classes (`worker`, `vendingmachine`, `coffee`, and its various derived classes) that encapsulate data and related behavior.
- Objects such as `w` (worker), `v1` (vendingmachine), and dynamically allocated coffee types are instantiated and used.

### 2. **Encapsulation**
- Data members (like cups, sugar, milk, beans) and methods (such as `refillcups`, `addmilk`, etc.) are encapsulated within their respective classes. Access and modification of these members are managed via methods.

### 3. **Inheritance**
- Inheritance is used to establish relationships between classes:
    - `turkish` and `american` inherit from the base class `coffee`.
    - `coldbrew` and `expresso` inherit from `american`.
    - `capicanno` and `latte` inherit from `turkish`.
- This allows for code reusability and extension of functionality.

### 4. **Polymorphism**
- The code uses both compile-time and run-time polymorphism.
- Base class pointers (`american *a = new coldbrew;`) are used to call overridden methods in derived classes.
- Virtual functions in `american` and `turkish` classes enable dynamic binding.

### 5. **Abstraction**
- Abstract behavior is provided using **pure virtual functions** (`virtual int addcups(int take)=0;`), ensuring that derived classes implement these essential methods specific to their coffee type.

### 6. **Static Members**
- The `worker` and `vendingmachine` classes use static data members to represent shared resources (e.g., total sugar, cups, etc.) accessible and modifiable by all objects.

## Getting Started

### Prerequisites

- **Compiler:** Windows-compatible C++ compiler (e.g., MSVC, MinGW, Dev-C++).
- **OS:** Designed for Windows due to dependencies on `windows.h` and `conio.h`.

### Building the Project

1. Clone/download the repository and place `9_CoffeeVendingMacineSystem.cpp` in your working directory.
2. Open your C++ IDE or terminal.
3. Compile:
   ```bash
   g++ 9_CoffeeVendingMacineSystem.cpp -o CoffeeVendingMachine
   ```
4. Run the executable:
   ```bash
   CoffeeVendingMachine.exe
   ```

**Note:** If you’re using a non-Windows system, the code will require changes due to the use of `windows.h` and `conio.h`.

### Usage

1. **Welcome Screen:** The application starts by showing a welcome message and instructions.
2. **Menu Options:**
    - Press `a` to order coffee.
    - Press `b` to view remaining resources.
    - Press `c` to proceed to payment and receive your coffee.
3. **Ordering:** 
    - Choose your coffee type (American or Turkish).
    - Select specific coffee variants and number of cups.
    - Decide whether to add sugar or keep it sugar-free.
4. **Refilling:** If any ingredient runs out during processing, the program prompts you to refill.
5. **Payment:** Enter the amount. The system handles exact payment, provides change, or denies the sale if insufficient funds.
6. **Exit:** The application exits after the coffee is paid for and dispensed.

### Example Session

```plaintext
                !!!.....Welcome to a coffee vending machine.....!!!

   For refilling must fill greater than equals to 2000

press #a: for take coffee
press #b: for remainings of coffee
press #c: for pay and get coffee
...
```

## Structure

- **worker class:** Manages refilling and tracks inventory (cups, milk, beans, sugar).
- **vendingmachine class:** Handles orders, payments, and displays resources.
- **Coffee subclasses:** Implements specific types and behaviors for each coffee kind.
- **Main loop:** Provides the UI and links all system components.

## Limitations & Future Improvements

- **Platform-Specific:** Depends on Windows libraries.
- **No Persistence:** Inventory resets on restart.
- **Console UI:** Could be improved with a graphical interface.
- **Code Quality:** Some code can be refactored for clarity and modularity.

## License

This project is open source and for educational use only.

---

**Enjoy your virtual coffee experience!**
