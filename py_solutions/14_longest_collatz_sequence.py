def collatz_num(n):
    if n % 2 == 0:
        return n // 2
    else:
        return (3 * n) + 1


def collatz_sequence(start):
    sequence = [start]
    new_num = collatz_num(start)
    while new_num != 1:
        sequence.append(new_num)
        previous = new_num
        new_num = collatz_num(previous)
    sequence.append(1)
    return sequence

if __name__ == "__main__":
    # print(collatz_sequence(13))
    assert(collatz_sequence(13) == [13, 40, 20, 10, 5, 16, 8, 4, 2, 1])

    # find longest collatx sequence under 1,000,000
    longest = 0
    largest_number = 0
    for i in range(1000000 - 1, 1, -1):
        current_sequence = collatz_sequence(i)
        current_length = len(current_sequence)
        if current_length > longest:
            longest = current_length
            largest_number = i
    print(largest_number)
