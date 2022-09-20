class Student:
    def __init__(self, name: str) -> None:
        self.name: str = name


if __name__ == "__main__":
    """
    클래스 인스턴스(Class Instance) vs 변수(Variable)
    """
    name: str = "Alex"
    student: Student = Student(name="Alex")
    
    print("Object id of name variable: ", id(name))
    print("Object id of student class instance: ", id(student))
    print("Object id of name instance variable: ", id(student.name))
    
    student: str = "Alex"
    print("Object id of stduent variable: ", id(student))
    
    sub_student: Student = Student(name="Tony")
    print("Object id of student class instance: ", id(sub_student))
    
    alex: Student = Student(name="Alex")
    print("Object id of student class instance: ", id(alex))
    