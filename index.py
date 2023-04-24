import sys


def get_flags_arguments(lst_arguments):
    return [arg for arg in lst_arguments if arg.startswith("-")]

def get_address_arguments(lst_arguments):
    return [arg for arg in lst_arguments if "." in arg]

def main():
    # Here we define the arguments passed to the program
    arguments = sys.argv[1:];

    print(get_flags_arguments(arguments));
    print(get_address_arguments(arguments));


main();