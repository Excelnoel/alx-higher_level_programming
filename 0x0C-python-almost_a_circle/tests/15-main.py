#!/usr/bin/python3
""" 15-main """

import sys
sys.path.append("/alx-higher_level_programming/0x0C-python-almost_a_circle")

from models.rectangle import Rectangle

if __name__ == "__main__":

    r1 = Rectangle(10, 7, 2, 8)
    r2 = Rectangle(2, 4)
    Rectangle.save_to_file([r1, r2])

    with open("Rectangle.json", "r") as file:
        print(file.read())
