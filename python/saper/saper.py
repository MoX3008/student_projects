import random

def create_board(size, bombs):
    board = [[0 for _ in range(size)] for _ in range(size)]
    bomb_positions = random.sample(range(size * size), bombs)
    for pos in bomb_positions:
        x = pos // size
        y = pos % size
        board[x][y] = 1
    return board

def print_board(board, revealed):
    size = len(board)
    print("  " + "  ".join(map(str, range(1, size + 1))))
    for i in range(size):
        row = []
        for j in range(size):
            if revealed[i][j]:
                row.append("V" if board[i][j] == 0 else "1")
            else:
                row.append("?")
        print(f"{i + 1} " + "  ".join(row))

def main():
    size = 3
    bombs = 2
    board = create_board(size, bombs)
    revealed = [[False for _ in range(size)] for _ in range(size)]

    while True:
        print_board(board, revealed)
        x, y = map(int, input("Podaj współrzędne (x y): ").split())
        if board[x - 1][y - 1] == 1:
            print("Trafiłeś na bombę! Koniec gry.")
            break
        else:
            revealed[x - 1][y - 1] = True
            if all(revealed[i][j] or board[i][j] == 1 for i in range(size) for j in range(size)):
                print_board(board, revealed)
                print("Gratulacje! Wygrałeś grę.")
                break

if __name__ == "__main__":
    main()
