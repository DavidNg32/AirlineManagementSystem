# Airline Management System

A C++ object-oriented project that manages flights from an airline. The project includes functionalities to display seat maps, manage passengers informations from and into a txt file from my Programming Fundamentals course.

## Getting Started

### Prerequisites
* [C++ Compiler](https://gcc.gnu.org/)
* [CMake](https://cmake.org/) (Optional)

### Installing
* Clone the repository
```bash
git clone https://github.com/DavidNg32/AirlineManagementSystem.git
```
* Compile the project

```bash
cd AirlineManagementSystem
g++ -o main main.cpp
```

### Running the program
* Run the compiled file
```bash
./main
```
## Showcase
* Program Interface

  ![Screenshot_1](https://github.com/user-attachments/assets/ef0691f4-a789-4391-8223-7f33687dcff7)

* The program reads the list of passengers from flight_info.txt and display the flight map accordingly to their seat number and letter
  
  ![Screenshot_2](https://github.com/user-attachments/assets/6ff75e3b-c523-4265-bc0d-4ce143ff996b)

* Display passenger lists
  
  ![Screenshot_3](https://github.com/user-attachments/assets/1d1914a9-d593-4556-80b1-2bdb6b548ffc)
  
* Add a new passenger into the list
  
  ![Screenshot_4](https://github.com/user-attachments/assets/59a5e22c-e666-4b5c-a7af-6ae0a70a63fb)
* Removal of the passenger with ID 10005
  
  ![Screenshot_5](https://github.com/user-attachments/assets/0be8a8ed-4d75-47a4-94e3-819caa1c7a6f)
  
* Save data will overwrite the text file with the new information

## Built With
* [C++](https://www.cplusplus.com/) - The programming language used
* [CMake](https://cmake.org/) - Build system (You can use other build systems)
* [GCC](https://gcc.gnu.org/) - Compiler
