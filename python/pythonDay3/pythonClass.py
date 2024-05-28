class SoccerPlayer(object):                     #(object)는 생략이 가능하다.
    def __init__(self, name, position, age):
        self.name = name
        self.position = position
        self.age = age
        # int _age c++
    
    def change_age(self, age = 20):
        self.age = age
        # this-> age = age c++


    def __str__(self):
        return f"Hello, My name is {self.name}, I'm {self.age} and I play in {self.position} "
def main():
    player1 = SoccerPlayer('김진세', "공격수", 30)
    player2 = SoccerPlayer('누구', "수비수", 29)
    print(player1.name)
    print(player2.name)
    print(player1.position)
    print(player2.position)
    print(player1.age)
    print(player2.age)
    player1.change_age()
    print(player1.age)
    player1.change_age(34)
    print(player1.age)
    print(player1.__str__())
    print(player1)
    print(player2)


if __name__ == "__main__":
    main()