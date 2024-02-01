import random
import string

# Function to generate a random string of specified length containing only alphanumeric characters
def generate_username(length):
    charset = string.ascii_letters + string.digits  # Characters to choose from
    return ''.join(random.choice(charset) for _ in range(length))

# Function to generate a strong password with special characters
def generate_password(length):
    charset = string.ascii_letters + string.digits + string.punctuation  # Characters to choose from including special characters
    return ''.join(random.choice(charset) for _ in range(length))

def main():
    # Generate username
    print("Generating Username...")
    username = generate_username(8)  # Generates an 8-character username using only alphanumeric characters
    print("Generated Username:", username)

    # Generate password
    print("\nGenerating Password...")
    password = generate_password(12)  # Generates a 12-character password including special characters
    print("Generated Password:", password)

if __name__ == "__main__":
    main()
