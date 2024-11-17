# Graphing Calculator in C

## Project Overview
This is a **Graphing Calculator** implemented in C, capable of graphing mathematical equations in a 2D coordinate system with dimensions of **29 rows** and **51 columns**. The program takes input as terms (coefficients and exponents) for a polynomial equation, calculates the corresponding graph points, and displays the results in a grid format. The unused spaces in the grid are represented by `.` for better visualization.

## Features
1. **Polynomial Graphing**:
   - Supports polynomial equations with multiple terms.
   - Each term is defined by a coefficient and an exponent.
2. **Graph Dimensions**:
   - Graph grid has 29 rows (y-axis) and 51 columns (x-axis).
   - Automatically scales and centers the graph on the grid.
3. **Axes Representation**:
   - X-axis is represented by `_`.
   - Y-axis is represented by `|`.
   - Points on the graph are marked with `*`.
   - Unused spaces are filled with `.`.
4. **Data Structure**:
   - Utilizes a structure to store each term of the polynomial.
5. **Dynamic Input**:
   - Users specify the number of terms and their coefficients and exponents.
6. **Console Output**:
   - Displays the graph as a grid with clear axis and plotted points.

## How It Works
1. **Input**:
   - The user inputs each term separately as a pair of integers: `coefficient` and `exponent`.
   - Example: For \( 2x^2 + 3x - 4 \), the input is:
     ```
     3  // Number of terms
     2 2  // Coefficient 2, Exponent 2
     3 1  // Coefficient 3, Exponent 1
     -4 0 // Coefficient -4, Exponent 0
     ```
2. **Processing**:
   - The program calculates `y` values for each `x` value in the range.
   - Maps the Cartesian coordinates to the 2D array (`graph`).
   - Flips the y-axis to align with array indexing.
3. **Output**:
   - The graph is printed in the terminal with:
     - `*` marking the points on the graph.
     - `|` and `_` representing the Y-axis and X-axis respectively.
     - `.` filling the unused spaces.

## Future Enhancements
- **String-Based Input**:
  - Allow users to input the equation as a single string, e.g., `2x^2 + 3x - 4`.
  - Implement a parser to convert the string into terms.
- **Support for Non-Polynomial Functions**:
  - Add support for trigonometric, exponential, and logarithmic functions.
- **Dynamic Graph Size**:
  - Enable users to customize the graph's dimensions.
- **Improved Scaling**:
  - Automatically scale and normalize values to fit larger equations within the grid.

## How to Run
1. Clone or download the project files.
2. Compile the program using a C compiler, e.g.:
   ```bash
   gcc graphing_calculator.c -o graphing_calculator -lm
3. The -lm is used for linking the math.h library into a C program during compilation
4. To run use
5. ```bash
   ./graphing_calculator
