class Student:
    class_name: str = "1반"
    
    def __init__(self, name: str) -> None:
        self.name: str = name
    
    def __call__(self) -> str:
        print("Object id of Class Variable: ", id(self.class_name))
        print("Object id of Instance Variable", id(self.name))
        return f"{self.name}은 {self.class_name}입니다."


if __name__ == "__main__":
    """
    클래스 변수(Class Variable) vs 인스턴스 변수(Instance Variable)
    """
    tony: Student = Student(name="Tony")
    alex: Student = Student(name="Alex")
    
    print(tony())
    print("-----")
    print(alex())
    