class NegativeNumberError(Exception):
    def __init__(self, value):
        self.value = value

    def __str__(self):
        return f"A negative number {self.value} was encountered in the list."

# Example usage
def check_list(numbers):
    for num in numbers:
        if num < 0:
            raise NegativeNumberError(num)

try:
    check_list([1, 2, -3, 4])
except NegativeNumberError as e:
    print(e)

