# Elevator Walking Distance Calculator

## Overview
This C++ program calculates the total walking distance of people in a multi-floor building, considering their start and end floor positions. It uses bubble sort to organize floor information and then computes the total walking distance.

## Features
- Calculates total walking distance for multiple people
- Sorts people's floor start and end positions
- Handles different floor entry and exit scenarios
- Supports variable number of people and floors

## Input Requirements
- First line: Total number of floors
- Second line: Number of people
- Subsequent lines: Start and end floors for each person

## Algorithm Details
- Uses Bubble Sort to order people's floor positions
- Calculates walking distance based on:
  - Vertical floor movements
  - Horizontal movements between people
- Handles different floor entry/exit scenarios

## Calculation Method
- Computes walking distance considering:
  - Initial floor differences
  - Movements between consecutive people
  - Final floor position relative to last person

## Prerequisites
- C++ Compiler (supporting C++11 or later)
- Standard input/output libraries

## Compilation
```bash
g++ -std=c++11 elevator_walking_distance.cpp -o elevator_walking_distance
```

## Usage
1. Run the compiled executable
2. Enter total number of floors
3. Enter number of people
4. For each person, enter start and end floors
5. Program outputs total walking distance

## Key Components
- `swap()`: Swaps integer values using pointers
- `bubbleSort()`: Sorts start and end floor arrays
- Main logic: Calculates walking distances between floors

## Complexity
- Time Complexity: O(n²) due to bubble sort
- Space Complexity: O(n)

## Potential Improvements
- Implement more efficient sorting algorithm
- Add input validation
- Create more robust error handling
- Support more complex floor movement scenarios

## Limitations
- Assumes sequential floor movements
- Limited to integer floor calculations
- Basic walking distance computation

## License
Open-source MIT License

## Author
Salman Hashemi
