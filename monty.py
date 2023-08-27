import sys

# Define the stack as an empty list
stack = []

# Function to push an integer onto the stack
def push(value):
    stack.append(value)

# Function to print all values on the stack (pall)
def pall():
    for item in reversed(stack):
        print(item)

# Main program
if len(sys.argv) != 2:
    print("Usage: ./monty <file>")
    sys.exit(1)

file_path = sys.argv[1]

try:
    with open(file_path, 'r') as file:
        for line_number, line in enumerate(file, start=1):
            tokens = line.strip().split()
            if not tokens:
                continue

            opcode = tokens[0]

            if opcode == 'push':
                if len(tokens) != 2 or not tokens[1].isdigit():
                    print(f"L{line_number}: usage: push integer")
                    sys.exit(1)
                push(int(tokens[1]))
            elif opcode == 'pall':
                pall()
            else:
                print(f"L{line_number}: unknown instruction {opcode}")
                sys.exit(1)
except FileNotFoundError:
    print(f"Error: File '{file_path}' not found.")
    sys.exit(1)
except Exception as e:
    print(f"Error: An unexpected error occurred - {e}")
    sys.exit(1)
