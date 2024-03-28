import shapes


def main():
    choice = 1
    while choice == 1:

        enter_choice = int(input("Enter the shape number you want to calculate area for\n1. Rectangle\n2. "
                                 "Triangle\n3. Circle\n4. Square\n"))
        if enter_choice == 1:
            my_rectangle = shapes.Rectangle()
            my_rectangle.set_values()
            print("Rectangle ")
            print("Length: ", my_rectangle.get_length())
            print("Width: ", my_rectangle.get_width())
            print("Area: ", my_rectangle.get_area())
            print("Perimeter: ", my_rectangle.get_perimeter())

        elif enter_choice == 2:
            my_triangle = shapes.Triangle()
            my_triangle.set_values()
            print("Triangle")
            print("Base: ", my_triangle.get_base())
            print("Height", my_triangle.get_height())
            print("Area: {my_triangle.get_area():.2f}")

        elif enter_choice == 3:
            my_circle = shapes.Circle()
            my_circle.set_values()
            print("Circle")
            print("Radius: ", my_circle.get_radius())
            print(f"Area: {my_circle.get_area():.2f}")
            print(f"Perimeter:  {my_circle.get_perimeter():.2f}")

        elif enter_choice == 4:
            my_square = shapes.Square()
            my_square.set_values()
            print("Square")
            print("Side: ", my_square.get_side())
            print("Area: ", my_square.get_area())
            print("Perimeter", my_square.get_perimeter())

        else:
            print("Dear user, Nothing was found!!")

        choice = int(input("Would you like to continue?\n Enter:\n1. To continue\n2. To exit\n"))


main()
