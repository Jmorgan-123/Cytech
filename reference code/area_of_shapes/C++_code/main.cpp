import math
def calculate_circle_area(radius):
    return math.pi * radius**2
def calculate_rectangle_area(length, width):
    return length * width
def calculate_triangle_area(base, height):
    return 0.5 * base * height
print("Choose a shape:")
print("1. Circle")
print("2. Rectangle")
print("3. Triangle")
choice = int(input("Enter your choice (1/2/3): "))
if choice == 1:
    radius = float(input("Enter the radius of the circle: "))
    area = calculate_circle_area(radius)
    print(f"The area of the circle is: {area}")
elif choice == 2:
    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))
    area = calculate_rectangle_area(length, width)
    print(f"The area of the rectangle is: {area}")
elif choice == 3:
    base = float(input("Enter the base of the triangle: "))
    height = float(input("Enter the height of the triangle: "))
    area = calculate_triangle_area(base, height)
    print(f"The area of the triangle is: {area}")
else:
    print("Invalid choice.")
import java.util.Scanner;
public class ShapeAreaCalculator {
    public static double calculateCircleArea(double radius) {
        return Math.PI * Math.pow(radius, 2);
    }
    public static double calculateRectangleArea(double length, double width) {
        return length * width;
    }
    public static double calculateTriangleArea(double base, double height) {
        return 0.5 * base * height;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Choose a shape:");
        System.out.println("1. Circle");
        System.out.println("2. Rectangle");
        System.out.println("3. Triangle");

        System.out.print("Enter your choice (1/2/3): ");
        int choice = scanner.nextInt();
        if (choice == 1) {
            System.out.print("Enter the radius of the circle: ");
            double radius = scanner.nextDouble();
            double area = calculateCircleArea(radius);
            System.out.println("The area of the circle is: " + area);
        } else if (choice == 2) {
            System.out.print("Enter the length of the rectangle: ");
            double length = scanner.nextDouble();
            System.out.print("Enter the width of the rectangle: ");
            double width = scanner.nextDouble();
            double area = calculateRectangleArea(length, width);
            System.out.println("The area of the rectangle is: " + area);
        } else if (choice == 3) {
            System.out.print("Enter the base of the triangle: ");
            double base = scanner.nextDouble();
            System.out.print("Enter the height of the triangle: ");
            double height = scanner.nextDouble();
            double area = calculateTriangleArea(base, height);
            System.out.println("The area of the triangle is: " + area);
        } else {
            System.out.println("Invalid choice.");
        }
        scanner.close();
    }
}
using System;

class Program
{
    static double CalculateCircleArea(double radius)
    {
        return Math.PI * Math.Pow(radius, 2);
    }

    static double CalculateRectangleArea(double length, double width)
    {
        return length * width;
    }

    static double CalculateTriangleArea(double baseLength, double height)
    {
        return 0.5 * baseLength * height;
    }

    static void Main()
    {
        Console.WriteLine("Choose a shape:");
        Console.WriteLine("1. Circle");
        Console.WriteLine("2. Rectangle");
        Console.WriteLine("3. Triangle");

        Console.Write("Enter your choice (1/2/3): ");
        int choice = int.Parse(Console.ReadLine());

        if (choice == 1)
        {
            Console.Write("Enter the radius of the circle: ");
            double radius = double.Parse(Console.ReadLine());
            double area = CalculateCircleArea(radius);
            Console.WriteLine($"The area of the circle is: {area}");
        }
        else if (choice == 2)
        {
            Console.Write("Enter the length of the rectangle: ");
            double length = double.Parse(Console.ReadLine());
            Console.Write("Enter the width of the rectangle: ");
            double width = double.Parse(Console.ReadLine());
            double area = CalculateRectangleArea(length, width);
            Console.WriteLine($"The area of the rectangle is: {area}");
        }
        else if (choice == 3)
        {
            Console.Write("Enter the base of the triangle: ");
            double baseLength = double.Parse(Console.ReadLine());
            Console.Write("Enter the height of the triangle: ");
            double height = double.Parse(Console.ReadLine());
            double area = CalculateTriangleArea(baseLength, height);
            Console.WriteLine($"The area of the triangle is: {area}");
        }
        else
        {
            Console.WriteLine("Invalid choice.");
        }
    }
}
