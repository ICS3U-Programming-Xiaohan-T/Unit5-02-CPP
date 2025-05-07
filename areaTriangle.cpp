// Copyright 2025
// Created by: Xiaohan
// Created on: May 5, 2025
// This program calculates the area of a triangle

#include <iostream>
#include <string>

// Function that calculates the area of a triangle
void calArea(float base, float height) {
    // The formula to calculate the area of a triangle
    float area = base * height / 2;
    std::cout << "the area of the triangle is: " << area << std::endl;
}
int main() {
    // Declare variables
    std::string baseStr;
    std::string heightStr;
    // Get user input on the base and height of the triangle
    std::cout << "Enter the base of the triangle: ";
    std::cin >> baseStr;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> heightStr;
    // Casting the height and base from string to float
    try {
        float base = std::stof(baseStr);
        float height = std::stof(heightStr);
        // Check if the base and height are positive numbers
        // If so
        if (base > 0 && height > 0) {
            // Call the function
            calArea(base, height);
        } else {
            // If not, ask user to enter positive numbers
            std::cout << "please enter positive numbers." << std::endl;
        }
    // Catch any invalid input
    } catch (const std::invalid_argument& e) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
}

