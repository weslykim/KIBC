class Product:
    pass

class Inventory:
    def __init__(self):
        self.__item = []                #__을쓰면 c++ 상속에서의 private과 동일한 결과를 얻을수 있다.
    
    def add_new_item(self, product):
        if type(product) == Product:
            self.__item.append(product)
            print("새로운 아이템이 추가되었습니다.")
        else:
            raise ValueError("Product 타입이 아닙니다.")

    def get_number_of_items(self):
        return len(self.__item)
    
    @property               #클래스의 메서드를 속성처럼 사용할 수 있도록 해줍니다.
    def items(self):
        return self.__item

def main():
    inven = Inventory()             
    # print(inven.__item)
    inven.add_new_item(Product())
    inven.add_new_item(Product())
    print(inven.items)
    # inven.add_new_item("Product")
    print(inven.get_number_of_items())

if __name__ == "__main__":
    main()