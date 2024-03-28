//
// Created by Eng. Joab Mugane on 21/03/2024
//

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
