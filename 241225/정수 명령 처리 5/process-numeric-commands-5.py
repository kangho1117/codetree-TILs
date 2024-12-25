def int_command(arr, comm):
    if ' ' in comm:
        str, num = comm.split()
        if str == 'push_back':
            arr.append(int(num))
        elif str == 'get':
            print(arr[int(num)-1])

    else:
        if comm == 'size':
            print(len(arr))
        elif comm == 'pop_back':
            arr.pop()

N = int(input())

arr = []

for i in range(N):
    comm = input()
    int_command(arr, comm)
