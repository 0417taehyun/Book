# 디자인 패턴 개요

## 목차

## 학습 목표

- 객체지향 프로그래밍의 이해
- 객체지향적 디자인 패턴의 원리
- 디자인 패턴의 종류와 맥락에 대한 이해
- 동적 프로그래밍 언어 패턴
- 생성과 구조, 행위 패턴

## 객체지향 프로그래밍

객체지향 맥락에서 객체(Object)는 속성(Data Members)과 함수(Function)로 구성된다.

이때 함수는 객체의 속성을 조작한다.

파이썬은 객체지향 언어로 흔히 *파이썬의 모든 것은 객체다*라는 말이 있듯 클래스 인스턴스와 변수는 개별적인 메모리 공간에 저장된다.

이때 클래스 인스턴스의 객체는 애플리케이션의 목적에 따라 다른 객체와 상호작용한다.

### 클래스 인스턴스와 변수

클래스 인스턴스와 변수가 개별적인 메모리 공간에 저장된다는 건 어떤 의미일까?

아래 [소스 코드](./example01.py)를 한 번 살펴보자.

```Python
class Student:
    def __init__(self, name: str) -> None:
        self.name: str = name


if __name__ == "__main__":
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
```

이를 출력해보면 결괏값은 아래와 같이 출력된다.

```
Object id of name variable:  4460495152
Object id of student class instance:  4461461456
Object id of name instance variable:  4460495152
Object id of stduent variable:  4460495152
Object id of student class instance:  4461461456
Object id of student class instance:  4461461216
```

#### 클래스 인스턴스

위 코드를 보면 `student`라는 클래스 인스턴스가 생성된 것을 알 수 있다.

해당 클래스 인스턴스의 메모리 주소 값은 맨 아래 `student`라는 변수명에 `"Alex"`라는 값을 재할당한 결과에 대한 변수의 메모리 주소 값과 다른 것을 출력된 결과물을 통해 알 수 있다.

특이한 점은 `sub_student` 클래스 인스턴스의 메모리 주소 값과 문자열 값으로 재할당하기 이전의 `student` 클래스 인스턴스의 메모리 주소 값이 같다는 것이다.

정해진 메모리 영역을 사용하는데 기존에 `student` 클래스 인스턴스로 할당되었던 부분이 해제되었기 때문에 해당 영역에 `sub_stduent` 클래스 인스턴스 메모리가 올라가 발생한 이유로 추정되는데 관련해서는 이후에 조금 더 자세히 살펴봐야겠다.

결론은

### 클래스 변수와 인스턴스 변수

#### 클래스 변수

#### 인스턴스 변수

### 객체

### 클래스

### 메서드
