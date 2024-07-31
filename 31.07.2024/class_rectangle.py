Class Rectangle:
    Def __init__(self, length, width):
        Self.length = length
        Self.width = width

    Def area(self):
        Return self.length * self.width

    Def perimeter(self):
        Return 2 * (self.length + self.width)

From shapes import Rectangle

Length = float(input(“Enter the length of the rectangle: “))
Width = float(input(“Enter the width of the rectangle: “))

Rect = Rectangle(length, width)
Print(f”Area: {rect.area()}”)
Print(f”Perimeter: {rect.perimeter()}”)
