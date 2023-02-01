#include <iostream>
#include <array>

// Colors for each side on cube
enum Color {
    White,
    Yellow,
    Blue,
    Green,
    Red,
    Orange
};

// 6 faces for the cube
const int num_faces = 6;
std::array<std::array<Color, 3>, 3> faces[num_faces];

// Initialize the cube to the solved state
void initCube() {
    for (int i = 0; i < num_faces; i++) {
        Color c = static_cast<Color>(i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                faces[i][j][k] = c;
            }
        }
    }
}

// Prints cube's current state
void printCube() {
    for (int i = 0; i < num_faces; i++) {
        std::cout << "Face " << i << ":" << std::endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                std::cout << faces[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

int main() {
    initCube();
    printCube();
    return 0;
}
